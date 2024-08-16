################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/Seven_Segment/SSD_BCD_config.c \
../HAL/Seven_Segment/SSD_BCD_program.c 

OBJS += \
./HAL/Seven_Segment/SSD_BCD_config.o \
./HAL/Seven_Segment/SSD_BCD_program.o 

C_DEPS += \
./HAL/Seven_Segment/SSD_BCD_config.d \
./HAL/Seven_Segment/SSD_BCD_program.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/Seven_Segment/SSD_BCD_config.o: ../HAL/Seven_Segment/SSD_BCD_config.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -c -I../Inc -I"C:/Users/fadye/Desktop/MINI_project" -I"C:/Users/fadye/Desktop/MINI_project/HAL/Inc" -I"C:/Users/fadye/Desktop/MINI_project/Inc" -I"C:/Users/fadye/Desktop/MINI_project/HAL/Inc" -I"C:/Users/fadye/Desktop/MINI_project/STM32_F103C6_Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"HAL/Seven_Segment/SSD_BCD_config.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
HAL/Seven_Segment/SSD_BCD_program.o: ../HAL/Seven_Segment/SSD_BCD_program.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -c -I../Inc -I"C:/Users/fadye/Desktop/MINI_project" -I"C:/Users/fadye/Desktop/MINI_project/HAL/Inc" -I"C:/Users/fadye/Desktop/MINI_project/Inc" -I"C:/Users/fadye/Desktop/MINI_project/HAL/Inc" -I"C:/Users/fadye/Desktop/MINI_project/STM32_F103C6_Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"HAL/Seven_Segment/SSD_BCD_program.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

