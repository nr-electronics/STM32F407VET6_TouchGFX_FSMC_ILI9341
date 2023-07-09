################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MyLib/STM32-touchscreen-XPT2046-HAL-SPI/XPT2046_touch.c 

C_DEPS += \
./MyLib/STM32-touchscreen-XPT2046-HAL-SPI/XPT2046_touch.d 

OBJS += \
./MyLib/STM32-touchscreen-XPT2046-HAL-SPI/XPT2046_touch.o 


# Each subdirectory must supply rules for building sources it contributes
MyLib/STM32-touchscreen-XPT2046-HAL-SPI/%.o MyLib/STM32-touchscreen-XPT2046-HAL-SPI/%.su MyLib/STM32-touchscreen-XPT2046-HAL-SPI/%.cyclo: ../MyLib/STM32-touchscreen-XPT2046-HAL-SPI/%.c MyLib/STM32-touchscreen-XPT2046-HAL-SPI/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I"D:/STM32_Workspace/STM32F407VET6_TouchGFX_FSMC_Demo/MyLib/STM32_ILI9341_Simple/inc" -I"D:/STM32_Workspace/STM32F407VET6_TouchGFX_FSMC_Demo/MyLib/STM32-touchscreen-XPT2046-HAL-SPI" -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-MyLib-2f-STM32-2d-touchscreen-2d-XPT2046-2d-HAL-2d-SPI

clean-MyLib-2f-STM32-2d-touchscreen-2d-XPT2046-2d-HAL-2d-SPI:
	-$(RM) ./MyLib/STM32-touchscreen-XPT2046-HAL-SPI/XPT2046_touch.cyclo ./MyLib/STM32-touchscreen-XPT2046-HAL-SPI/XPT2046_touch.d ./MyLib/STM32-touchscreen-XPT2046-HAL-SPI/XPT2046_touch.o ./MyLib/STM32-touchscreen-XPT2046-HAL-SPI/XPT2046_touch.su

.PHONY: clean-MyLib-2f-STM32-2d-touchscreen-2d-XPT2046-2d-HAL-2d-SPI

