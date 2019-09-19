################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
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
LSS += \
GPIO_LAB_0.lss \

FLASH_IMAGE += \
GPIO_LAB_0.hex \

EEPROM_IMAGE += \
GPIO_LAB_0.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: GPIO_LAB_0.elf secondary-outputs

# Tool invocations
GPIO_LAB_0.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,GPIO_LAB_0.map -mmcu=atmega16 -o "GPIO_LAB_0.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

GPIO_LAB_0.lss: GPIO_LAB_0.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S GPIO_LAB_0.elf  >"GPIO_LAB_0.lss"
	@echo 'Finished building: $@'
	@echo ' '

GPIO_LAB_0.hex: GPIO_LAB_0.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex GPIO_LAB_0.elf  "GPIO_LAB_0.hex"
	@echo 'Finished building: $@'
	@echo ' '

GPIO_LAB_0.eep: GPIO_LAB_0.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex GPIO_LAB_0.elf  "GPIO_LAB_0.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: GPIO_LAB_0.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega16 GPIO_LAB_0.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) GPIO_LAB_0.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
