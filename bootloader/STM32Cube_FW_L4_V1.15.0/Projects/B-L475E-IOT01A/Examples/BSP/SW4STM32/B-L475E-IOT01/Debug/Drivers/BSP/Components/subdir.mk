################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
T:/OTA_UPDATE/Final_Demo_OTA/src_files/bootloader/STM32Cube_FW_L4_V1.15.0/Drivers/BSP/Components/hts221/hts221.c \
T:/OTA_UPDATE/Final_Demo_OTA/src_files/bootloader/STM32Cube_FW_L4_V1.15.0/Drivers/BSP/Components/lis3mdl/lis3mdl.c \
T:/OTA_UPDATE/Final_Demo_OTA/src_files/bootloader/STM32Cube_FW_L4_V1.15.0/Drivers/BSP/Components/lps22hb/lps22hb.c \
T:/OTA_UPDATE/Final_Demo_OTA/src_files/bootloader/STM32Cube_FW_L4_V1.15.0/Drivers/BSP/Components/lsm6dsl/lsm6dsl.c 

OBJS += \
./Drivers/BSP/Components/hts221.o \
./Drivers/BSP/Components/lis3mdl.o \
./Drivers/BSP/Components/lps22hb.o \
./Drivers/BSP/Components/lsm6dsl.o 

C_DEPS += \
./Drivers/BSP/Components/hts221.d \
./Drivers/BSP/Components/lis3mdl.d \
./Drivers/BSP/Components/lps22hb.d \
./Drivers/BSP/Components/lsm6dsl.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/Components/hts221.o: T:/OTA_UPDATE/Final_Demo_OTA/src_files/bootloader/STM32Cube_FW_L4_V1.15.0/Drivers/BSP/Components/hts221/hts221.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -c -I../../../Inc -I../../../../../../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../../../../../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../../../../../../Drivers/BSP/B-L475E-IOT01 -I../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../Drivers/BSP/Components/hts221 -I../../../../../../../Drivers/BSP/Components/lps22hb -I../../../../../../../Drivers/BSP/Components/lis3mdl -I../../../../../../../Drivers/BSP/Components/lsm6dsl -I../../../../../../../Drivers/CMSIS/Include -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/Components/hts221.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/Components/lis3mdl.o: T:/OTA_UPDATE/Final_Demo_OTA/src_files/bootloader/STM32Cube_FW_L4_V1.15.0/Drivers/BSP/Components/lis3mdl/lis3mdl.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -c -I../../../Inc -I../../../../../../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../../../../../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../../../../../../Drivers/BSP/B-L475E-IOT01 -I../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../Drivers/BSP/Components/hts221 -I../../../../../../../Drivers/BSP/Components/lps22hb -I../../../../../../../Drivers/BSP/Components/lis3mdl -I../../../../../../../Drivers/BSP/Components/lsm6dsl -I../../../../../../../Drivers/CMSIS/Include -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/Components/lis3mdl.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/Components/lps22hb.o: T:/OTA_UPDATE/Final_Demo_OTA/src_files/bootloader/STM32Cube_FW_L4_V1.15.0/Drivers/BSP/Components/lps22hb/lps22hb.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -c -I../../../Inc -I../../../../../../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../../../../../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../../../../../../Drivers/BSP/B-L475E-IOT01 -I../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../Drivers/BSP/Components/hts221 -I../../../../../../../Drivers/BSP/Components/lps22hb -I../../../../../../../Drivers/BSP/Components/lis3mdl -I../../../../../../../Drivers/BSP/Components/lsm6dsl -I../../../../../../../Drivers/CMSIS/Include -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/Components/lps22hb.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/Components/lsm6dsl.o: T:/OTA_UPDATE/Final_Demo_OTA/src_files/bootloader/STM32Cube_FW_L4_V1.15.0/Drivers/BSP/Components/lsm6dsl/lsm6dsl.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -c -I../../../Inc -I../../../../../../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../../../../../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../../../../../../Drivers/BSP/B-L475E-IOT01 -I../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../Drivers/BSP/Components/hts221 -I../../../../../../../Drivers/BSP/Components/lps22hb -I../../../../../../../Drivers/BSP/Components/lis3mdl -I../../../../../../../Drivers/BSP/Components/lsm6dsl -I../../../../../../../Drivers/CMSIS/Include -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/Components/lsm6dsl.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

