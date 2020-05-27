/*
 * flash_organisation.h
 *
 *  Created on: 02-May-2020
 *      Author: Swanand_Sapre
 */

#ifndef APPLICATION_CODE_FLASH_ORGANISATION_H_
#define APPLICATION_CODE_FLASH_ORGANISATION_H_

#define BOOTLOADER					(0)
#define	IMG_0						(1)
#define	IMG_1						(2)

#define WHO_AM_I					IMG_1

#define BOOTLOADER_START_ADDR		(0x08000000UL)	//800_0000 to 800_6000 :24K

#define IMG_0_METADATA_START_ADDR	(0x08006000UL) //Meta-data-image#0
#define IMG_1_METADATA_START_ADDR	(0x08006010UL)//Meta-data-image#1

#define IMG_0_START_ADDR			(0x08006800UL) 	//0x08006800UL-0x806A800 :400K
#define IMG_1_START_ADDR			(0x08080000UL)	//0x08080000UL-0x080E43FF :400K

#define VECTOR_TABLE_OFFSET_IMG_0	(IMG_0_START_ADDR-BOOTLOADER_START_ADDR)
#define VECTOR_TABLE_OFFSET_IMG_1	(IMG_1_START_ADDR-BOOTLOADER_START_ADDR)


/*OTA STATES*/
#define OTA_IDLE					(0)
#define OTA_CHECKING_FOR_NEW_IMAGE 	(1)
#define OTA_DOWNLOADING_IMAGE		(2)
/** Part of OTA code Change. */

#if WHO_AM_I==IMG_0
	#define FLASH_MEM_WRITE_ADDRESS  		IMG_1_START_ADDR
	#define Next_IMG_START_ADDRESS			IMG_1_START_ADDR
	#define CURR_IMG_START_ADDRESS			IMG_0_START_ADDR
	#define CURR_METADATA_ADDRESS			IMG_0_METADATA_START_ADDR
	#define NEXT_METADATA_ADDRESS			IMG_1_METADATA_START_ADDR

#else
	#define FLASH_MEM_WRITE_ADDRESS	    	IMG_0_START_ADDR
	#define Next_IMG_START_ADDRESS			IMG_0_START_ADDR
	#define CURR_IMG_START_ADDRESS			IMG_1_START_ADDR
	#define CURR_METADATA_ADDRESS			IMG_1_METADATA_START_ADDR
	#define NEXT_METADATA_ADDRESS			IMG_0_METADATA_START_ADDR
#endif

const uint32_t current_fw_version = 27;
//Every image will have a meta-data denoting below information.
typedef struct meta_data{
	uint32_t img_strt_add;
	uint32_t isUpdated;
	struct meta_data *next;
}meta_data_t;

#endif /* APPLICATION_CODE_FLASH_ORGANISATION_H_ */
