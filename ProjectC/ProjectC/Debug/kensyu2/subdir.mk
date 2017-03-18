################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../kensyu2/kensyu2.c 

OBJS += \
./kensyu2/kensyu2.o 

C_DEPS += \
./kensyu2/kensyu2.d 


# Each subdirectory must supply rules for building sources it contributes
kensyu2/%.o: ../kensyu2/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


