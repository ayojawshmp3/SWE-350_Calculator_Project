################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/app.c \
../src/hardware.c 

C_DEPS += \
./src/app.d \
./src/hardware.d 

OBJS += \
./src/app.o \
./src/hardware.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler 4.8.3 [arm-linux-gnueabihf]'
	arm-linux-gnueabihf-gcc.exe -std=c99 -O0 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/app.d ./src/app.o ./src/hardware.d ./src/hardware.o

.PHONY: clean-src

