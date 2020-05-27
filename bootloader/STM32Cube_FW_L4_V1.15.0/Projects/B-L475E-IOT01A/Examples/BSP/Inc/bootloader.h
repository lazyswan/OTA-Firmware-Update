/*
 * bootloader.h
 *
 *  Created on: 18-Apr-2020
 *      Author: Swanand Sapre
 */

#ifndef EXAMPLE_USER_BOOTLOADER_H_
#define EXAMPLE_USER_BOOTLOADER_H_
#include <stdint.h>
#include "main.h"


#define NULL_FLASH  (0xFFFFFFFFUL)
#define FLASH_TYPEPROGRAM_DOUBLEWORD    ((uint32_t)0x00)
//This function Performs a functional call back to img_1;
void execute_img1();

//This function Performs a functional call back to img_0;
void execute_img0();

//This function initialises meta-data of both the images.
void meta_data_init();

//This function selects the appropiate image to be executed.
uint32_t select_updated_img_to_execute();
#endif /* EXAMPLE_USER_BOOTLOADER_H_ */
