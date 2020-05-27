################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
T:/OTA_UPDATE/Final_Demo_OTA/src_files/bootloader/STM32Cube_FW_L4_V1.15.0/Projects/B-L475E-IOT01A/Examples/BSP/SW4STM32/startup_stm32l475xx.s 

C_SRCS += \
T:/OTA_UPDATE/Final_Demo_OTA/src_files/bootloader/STM32Cube_FW_L4_V1.15.0/Projects/B-L475E-IOT01A/Examples/BSP/SW4STM32/syscalls.c 

OBJS += \
./Example/SW4STM32/startup_stm32l475xx.o \
./Example/SW4STM32/syscalls.o 

C_DEPS += \
./Example/SW4STM32/syscalls.d 


# Each subdirectory must supply rules for building sources it contributes
Example/SW4STM32/startup_stm32l475xx.o: T:/OTA_UPDATE/Final_Demo_OTA/src_files/bootloader/STM32Cube_FW_L4_V1.15.0/Projects/B-L475E-IOT01A/Examples/BSP/SW4STM32/startup_stm32l475xx.s
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -c -x assembler-with-cpp --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"
Example/SW4STM32/syscalls.o: T:/OTA_UPDATE/Final_Demo_OTA/src_files/bootloader/STM32Cube_FW_L4_V1.15.0/Projects/B-L475E-IOT01A/Examples/BSP/SW4STM32/syscalls.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -c -I../../../Inc -I../../../../../../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../../../../../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../../../../../../Drivers/BSP/B-L475E-IOT01 -I../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../Drivers/BSP/Components/hts221 -I../../../../../../../Drivers/BSP/Components/lps22hb -I../../../../../../../Drivers/BSP/Components/lis3mdl -I../../../../../../../Drivers/BSP/Components/lsm6dsl -I../../../../../../../Drivers/CMSIS/Include -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"Example/SW4STM32/syscalls.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

