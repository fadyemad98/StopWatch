################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../STM32_F103C6_Drivers/GPIO/STM32_F103C6_GPIO_Driver.c 

OBJS += \
./STM32_F103C6_Drivers/GPIO/STM32_F103C6_GPIO_Driver.o 

C_DEPS += \
./STM32_F103C6_Drivers/GPIO/STM32_F103C6_GPIO_Driver.d 


# Each subdirectory must supply rules for building sources it contributes
STM32_F103C6_Drivers/GPIO/STM32_F103C6_GPIO_Driver.o: ../STM32_F103C6_Drivers/GPIO/STM32_F103C6_GPIO_Driver.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -c -I../Inc -I"C:/Users/fadye/Desktop/MINI_project" -I"C:/Users/fadye/Desktop/MINI_project/HAL/Inc" -I"C:/Users/fadye/Desktop/MINI_project/Inc" -I"C:/Users/fadye/Desktop/MINI_project/HAL/Inc" -I"C:/Users/fadye/Desktop/MINI_project/STM32_F103C6_Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STM32_F103C6_Drivers/GPIO/STM32_F103C6_GPIO_Driver.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

