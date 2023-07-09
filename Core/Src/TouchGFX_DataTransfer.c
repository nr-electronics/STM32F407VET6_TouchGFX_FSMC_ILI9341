#include "TouchGFX_DataTransfer.h"

static uint8_t isTransmittingData = 0;

uint32_t touchgfxDisplayDriverTransmitActive(void)
{
	return isTransmittingData;
}

void touchgfxDisplayDriverTransmitBlock(uint8_t* pixels, uint16_t x, uint16_t y, uint16_t w, uint16_t h)
{
	int NumItems = (w * h);

	uint8_t dL;
	uint8_t dH;

	uint16_t data;
	
	isTransmittingData = 1;
	
	lcdSetWindow(x, y, x + w - 1, y + h - 1);

	while (NumItems--)
	{
		dL = *pixels;
		pixels++;
		dH = *pixels;
		data = ((uint16_t)dH << 8) | dL;
		LCD_DataWrite(data);
		pixels++;
	}

	isTransmittingData = 0;
	DisplayDriver_TransferCompleteCallback();
}

