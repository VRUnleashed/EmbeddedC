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
IOpinRead.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
IOpinRead.list \

OBJCOPY_BIN += \
IOpinRead.bin \


# All Target
all: IOpinRead.elf secondary-outputs

# Tool invocations
IOpinRead.elf: $(OBJS) $(USER_OBJS) C:\Users\VRUnleashed\Documents\Embedded-C\My_workspace\target\IOpinRead\STM32F401RETX_FLASH.ld
	arm-none-eabi-gcc -o "IOpinRead.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\VRUnleashed\Documents\Embedded-C\My_workspace\target\IOpinRead\STM32F401RETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="IOpinRead.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

IOpinRead.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "IOpinRead.list"
	@echo 'Finished building: $@'
	@echo ' '

IOpinRead.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "IOpinRead.bin"
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
