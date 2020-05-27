/*
 * bootloader.c
 *
 *  Created on: 18-Apr-2020
 *      Author: Swanand Sapre
 */
#include "bootloader.h"
#include "main.h"
#include "stm32l4xx_hal_flash.h"
#include "ota_config.h"

#include <stdio.h>

void execute_img1(){

	void (*img_1_call_back)(void);//pointer to hold the reset handler
	//MSP
	uint32_t mspVal= *(volatile uint32_t*)IMG_1_START_ADDR;
	__set_MSP(mspVal);

	//second address is address of reset handler
	uint32_t resetHandler= *(volatile uint32_t*)(IMG_1_START_ADDR+4);
	img_1_call_back = (void *)resetHandler;
	//printf("RH: %d\n",resetHandler);
	//Jumping to User Application;
	img_1_call_back();

}

void execute_img0(){


	//printf("RH: %x\n",IMG_0_START_ADDR+4);
	void (*img_0_call_back)(void);//pointer to hold the reset handler
	//MSP

	uint32_t mspVal= *(volatile uint32_t*)IMG_0_START_ADDR;
	__set_MSP(mspVal);

	//second address is address of reset handler
	uint32_t resetHandler= *(volatile uint32_t*)(IMG_0_START_ADDR+4);
	img_0_call_back = (void *)resetHandler;
	//Jumping to User Application;
	//printf("RH: %x\n",IMG_0_START_ADDR+4);
	img_0_call_back();

}

void meta_data_init(){
	//Initializing Meta-data
	uint32_t true=1;
	uint32_t false=0;
	uint32_t end_indicator=0xDEADBEEF;
	uint64_t data=0;
	volatile uint32_t sanity_chk_0=*(uint32_t*)META_DATA_IMG_0_CHK;
	volatile uint32_t sanity_chk_1=*(uint32_t*)META_DATA_IMG_1_CHK;
	if((sanity_chk_0!=end_indicator || sanity_chk_1!=end_indicator)){
		printf("-->Initializing Meta Data Info...\r\n");
		uint32_t* addr=(uint32_t*)IMG_0_METADATA_START_ADDR;
		HAL_FLASH_Unlock();
		//Initialize meta-data for img_0:
		data=true; //meta_data.img_strt_add
		data=data<<32 | (0x08006800UL);	//meta_data.isUpdated
		HAL_FLASH_Program(FLASH_TYPEPROGRAM_DOUBLEWORD, addr, data);

		addr=addr+2;
		data=end_indicator; //meta_data.next
		data=data << 32 | (0x08006010UL);
		HAL_FLASH_Program(FLASH_TYPEPROGRAM_DOUBLEWORD, addr, data);

		//initialise metadata for img_1:
		addr=(uint32_t*) (0x08006010UL);
		data=false; //meta_data.img_strt_add
		data=data<<32 | (0x08080000UL); //meta_data.isUpdated
		HAL_FLASH_Program(FLASH_TYPEPROGRAM_DOUBLEWORD, addr, data);
		addr=addr+2;
		data=end_indicator;
		data=data << 32 | IMG_0_METADATA_START_ADDR;
		HAL_FLASH_Program(FLASH_TYPEPROGRAM_DOUBLEWORD, addr, data);

		HAL_FLASH_Lock();
	}
	else{
		printf("-->Meta Data Already Initialized...\r\n");
	}

}

//returns the address of image to Execute
uint32_t select_updated_img_to_execute(){

	uint32_t true=1;
	uint32_t false=0;
	meta_data_t *head=(meta_data_t*)IMG_0_METADATA_START_ADDR;
	meta_data_t *curr=head;

	while(curr->isUpdated !=true){
		curr=curr->next;
	}

	if(curr->img_strt_add==IMG_0_START_ADDR){
		printf("-->Executing Img0\r\n");
		execute_img0();
	}
	else if(curr->img_strt_add==IMG_1_START_ADDR){
		printf("-->Executing Img1\r\n");
		execute_img1();
	}
	else{
		printf("-->!ERROR in METADATA\r\n");
	}

}
void execute_img(){
	uint32_t ret_addr;
	ret_addr=select_updated_img_to_execute();
	if(ret_addr==IMG_0_START_ADDR){
		execute_img0();
	}
	else if(ret_addr==IMG_1_START_ADDR){
		execute_img1();
	}
	else{
		printf("NO VALID IMAGE FOUND!\r\n");
	}


}
