################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/andrew/eclipse-embedded-systems-workspace/Atmega32_Drivers/GPIO/GPIO.c 

OBJS += \
./Atmega32_Drivers/GPIO/GPIO.o 

C_DEPS += \
./Atmega32_Drivers/GPIO/GPIO.d 


# Each subdirectory must supply rules for building sources it contributes
Atmega32_Drivers/GPIO/GPIO.o: C:/Users/andrew/eclipse-embedded-systems-workspace/Atmega32_Drivers/GPIO/GPIO.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\andrew\eclipse-embedded-systems-workspace\Atmega32_Drivers" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


