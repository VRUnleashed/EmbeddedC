################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
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
ledToggle.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
ledToggle.list \

OBJCOPY_BIN += \
ledToggle.bin \


# All Target
all: ledToggle.elf secondary-outputs

# Tool invocations
ledToggle.elf: $(OBJS) $(USER_OBJS) C:\Users\VRUnleashed\Documents\Embedded-C\My_workspace\target\ledToggle\STM32F401RETX_FLASH.ld
	arm-none-eabi-gcc -o "ledToggle.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\VRUnleashed\Documents\Embedded-C\My_workspace\target\ledToggle\STM32F401RETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="ledToggle.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

ledToggle.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "ledToggle.list"
	@echo 'Finished building: $@'
	@echo ' '

ledToggle.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "ledToggle.bin"
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
