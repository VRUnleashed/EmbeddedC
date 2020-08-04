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
000Test.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
000Test.list \

OBJCOPY_BIN += \
000Test.bin \


# All Target
all: 000Test.elf secondary-outputs

# Tool invocations
000Test.elf: $(OBJS) $(USER_OBJS) C:\Users\VRUnleashed\Documents\Embedded-C\My_workspace\target\000Test\STM32F401RETX_FLASH.ld
	arm-none-eabi-gcc -o "000Test.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\VRUnleashed\Documents\Embedded-C\My_workspace\target\000Test\STM32F401RETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="000Test.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

000Test.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "000Test.list"
	@echo 'Finished building: $@'
	@echo ' '

000Test.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "000Test.bin"
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
