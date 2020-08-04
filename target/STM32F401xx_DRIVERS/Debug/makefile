################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
STM32F401xx_DRIVERS.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
STM32F401xx_DRIVERS.list \

OBJCOPY_BIN += \
STM32F401xx_DRIVERS.bin \


# All Target
all: STM32F401xx_DRIVERS.elf secondary-outputs

# Tool invocations
STM32F401xx_DRIVERS.elf: $(OBJS) $(USER_OBJS) C:\Users\VRUnleashed\Documents\Embedded-C\My_workspace\target\STM32F401xx_DRIVERS\STM32F401RETX_FLASH.ld
	arm-none-eabi-gcc -o "STM32F401xx_DRIVERS.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\VRUnleashed\Documents\Embedded-C\My_workspace\target\STM32F401xx_DRIVERS\STM32F401RETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="STM32F401xx_DRIVERS.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

STM32F401xx_DRIVERS.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "STM32F401xx_DRIVERS.list"
	@echo 'Finished building: $@'
	@echo ' '

STM32F401xx_DRIVERS.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "STM32F401xx_DRIVERS.bin"
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
