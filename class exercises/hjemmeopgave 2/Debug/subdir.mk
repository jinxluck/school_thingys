################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../hjemmeopgave2.c \
../hjemmeopgave_2_v2.c 

OBJS += \
./hjemmeopgave2.o \
./hjemmeopgave_2_v2.o 

C_DEPS += \
./hjemmeopgave2.d \
./hjemmeopgave_2_v2.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


