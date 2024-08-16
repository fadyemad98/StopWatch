################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/PB/PB_config.c \
../HAL/PB/PB_program.c 

OBJS += \
./HAL/PB/PB_config.o \
./HAL/PB/PB_program.o 

C_DEPS += \
./HAL/PB/PB_config.d \
./HAL/PB/PB_program.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/PB/PB_config.o: ../HAL/PB/PB_config.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -c -I../Inc -I"C:/Users/fadye/Desktop/MINI_project" -I"C:/Users/fadye/Desktop/MINI_project/HAL/Inc" -I"C:/Users/fadye/Desktop/MINI_project/Inc" -I"C:/Users/fadye/Desktop/MINI_project/HAL/Inc" -I"C:/Users/fadye/Desktop/MINI_project/STM32_F103C6_Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"HAL/PB/PB_config.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
HAL/PB/PB_program.o: ../HAL/PB/PB_program.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -c -I../Inc -I"C:/Users/fadye/Desktop/MINI_project" -I"C:/Users/fadye/Desktop/MINI_project/HAL/Inc" -I"C:/Users/fadye/Desktop/MINI_project/Inc" -I"C:/Users/fadye/Desktop/MINI_project/HAL/Inc" -I"C:/Users/fadye/Desktop/MINI_project/STM32_F103C6_Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"HAL/PB/PB_program.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

