################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MyLib/STM32_ILI9341_Simple/src/ili9341_simple.c 

C_DEPS += \
./MyLib/STM32_ILI9341_Simple/src/ili9341_simple.d 

OBJS += \
./MyLib/STM32_ILI9341_Simple/src/ili9341_simple.o 


# Each subdirectory must supply rules for building sources it contributes
MyLib/STM32_ILI9341_Simple/src/%.o MyLib/STM32_ILI9341_Simple/src/%.su MyLib/STM32_ILI9341_Simple/src/%.cyclo: ../MyLib/STM32_ILI9341_Simple/src/%.c MyLib/STM32_ILI9341_Simple/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I"D:/STM32_Workspace/STM32F407VET6_TouchGFX_FSMC_Demo/MyLib/STM32_ILI9341_Simple/inc" -I"D:/STM32_Workspace/STM32F407VET6_TouchGFX_FSMC_Demo/MyLib/STM32-touchscreen-XPT2046-HAL-SPI" -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-MyLib-2f-STM32_ILI9341_Simple-2f-src

clean-MyLib-2f-STM32_ILI9341_Simple-2f-src:
	-$(RM) ./MyLib/STM32_ILI9341_Simple/src/ili9341_simple.cyclo ./MyLib/STM32_ILI9341_Simple/src/ili9341_simple.d ./MyLib/STM32_ILI9341_Simple/src/ili9341_simple.o ./MyLib/STM32_ILI9341_Simple/src/ili9341_simple.su

.PHONY: clean-MyLib-2f-STM32_ILI9341_Simple-2f-src

