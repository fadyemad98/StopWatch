################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include STM32_F103C6_Drivers/SYSTICK_DRIVER/subdir.mk
-include STM32_F103C6_Drivers/GPIO/subdir.mk
-include HAL/Seven_Segment/subdir.mk
-include HAL/PB/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
MINI_project_STM32.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
MINI_project_STM32.list \

OBJCOPY_BIN += \
MINI_project_STM32.bin \


# All Target
all: MINI_project_STM32.elf secondary-outputs

# Tool invocations
MINI_project_STM32.elf: $(OBJS) $(USER_OBJS) C:\Users\fadye\Desktop\MINI_project\STM32F103C6TX_FLASH.ld
	arm-none-eabi-gcc -gdwarf-2 -o "MINI_project_STM32.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\fadye\Desktop\MINI_project\STM32F103C6TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="MINI_project_STM32.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

MINI_project_STM32.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "MINI_project_STM32.list"
	@echo 'Finished building: $@'
	@echo ' '

MINI_project_STM32.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "MINI_project_STM32.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
