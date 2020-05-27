################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Example/User/bootloader.c \
T:/OTA_UPDATE/Final_Demo_OTA/src_files/bootloader/STM32Cube_FW_L4_V1.15.0/Projects/B-L475E-IOT01A/Examples/BSP/Src/main.c \
T:/OTA_UPDATE/Final_Demo_OTA/src_files/bootloader/STM32Cube_FW_L4_V1.15.0/Projects/B-L475E-IOT01A/Examples/BSP/Src/qspi.c \
T:/OTA_UPDATE/Final_Demo_OTA/src_files/bootloader/STM32Cube_FW_L4_V1.15.0/Projects/B-L475E-IOT01A/Examples/BSP/Src/sensors.c \
T:/OTA_UPDATE/Final_Demo_OTA/src_files/bootloader/STM32Cube_FW_L4_V1.15.0/Projects/B-L475E-IOT01A/Examples/BSP/Src/stm32l4xx_it.c 

OBJS += \
./Example/User/bootloader.o \
./Example/User/main.o \
./Example/User/qspi.o \
./Example/User/sensors.o \
./Example/User/stm32l4xx_it.o 

C_DEPS += \
./Example/User/bootloader.d \
./Example/User/main.d \
./Example/User/qspi.d \
./Example/User/sensors.d \
./Example/User/stm32l4xx_it.d 


# Each subdirectory must supply rules for building sources it contributes
Example/User/bootloader.o: ../Example/User/bootloader.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -c -I../../../Inc -I../../../../../../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../../../../../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../../../../../../Drivers/BSP/B-L475E-IOT01 -I../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../Drivers/BSP/Components/hts221 -I../../../../../../../Drivers/BSP/Components/lps22hb -I../../../../../../../Drivers/BSP/Components/lis3mdl -I../../../../../../../Drivers/BSP/Components/lsm6dsl -I../../../../../../../Drivers/CMSIS/Include -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"Example/User/bootloader.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Example/User/main.o: T:/OTA_UPDATE/Final_Demo_OTA/src_files/bootloader/STM32Cube_FW_L4_V1.15.0/Projects/B-L475E-IOT01A/Examples/BSP/Src/main.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -c -I../../../Inc -I../../../../../../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../../../../../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../../../../../../Drivers/BSP/B-L475E-IOT01 -I../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../Drivers/BSP/Components/hts221 -I../../../../../../../Drivers/BSP/Components/lps22hb -I../../../../../../../Drivers/BSP/Components/lis3mdl -I../../../../../../../Drivers/BSP/Components/lsm6dsl -I../../../../../../../Drivers/CMSIS/Include -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"Example/User/main.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Example/User/qspi.o: T:/OTA_UPDATE/Final_Demo_OTA/src_files/bootloader/STM32Cube_FW_L4_V1.15.0/Projects/B-L475E-IOT01A/Examples/BSP/Src/qspi.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -c -I../../../Inc -I../../../../../../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../../../../../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../../../../../../Drivers/BSP/B-L475E-IOT01 -I../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../Drivers/BSP/Components/hts221 -I../../../../../../../Drivers/BSP/Components/lps22hb -I../../../../../../../Drivers/BSP/Components/lis3mdl -I../../../../../../../Drivers/BSP/Components/lsm6dsl -I../../../../../../../Drivers/CMSIS/Include -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"Example/User/qspi.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Example/User/sensors.o: T:/OTA_UPDATE/Final_Demo_OTA/src_files/bootloader/STM32Cube_FW_L4_V1.15.0/Projects/B-L475E-IOT01A/Examples/BSP/Src/sensors.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -c -I../../../Inc -I../../../../../../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../../../../../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../../../../../../Drivers/BSP/B-L475E-IOT01 -I../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../Drivers/BSP/Components/hts221 -I../../../../../../../Drivers/BSP/Components/lps22hb -I../../../../../../../Drivers/BSP/Components/lis3mdl -I../../../../../../../Drivers/BSP/Components/lsm6dsl -I../../../../../../../Drivers/CMSIS/Include -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"Example/User/sensors.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Example/User/stm32l4xx_it.o: T:/OTA_UPDATE/Final_Demo_OTA/src_files/bootloader/STM32Cube_FW_L4_V1.15.0/Projects/B-L475E-IOT01A/Examples/BSP/Src/stm32l4xx_it.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -c -I../../../Inc -I../../../../../../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../../../../../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../../../../../../Drivers/BSP/B-L475E-IOT01 -I../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../Drivers/BSP/Components/hts221 -I../../../../../../../Drivers/BSP/Components/lps22hb -I../../../../../../../Drivers/BSP/Components/lis3mdl -I../../../../../../../Drivers/BSP/Components/lsm6dsl -I../../../../../../../Drivers/CMSIS/Include -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"Example/User/stm32l4xx_it.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

