/*
 * TouchGFX_DataTransfer.h
 *
 *  Created on: 27 груд. 2021 р.
 *      Author: tabur
 */

#ifndef _DATATRANSFER_H_
#define _DATATRANSFER_H_

#include <stdint.h>
#include "ili9341_simple.h"

#ifdef __cplusplus
 extern "C" {
#endif

extern void touchgfxDisplayDriverTransmitBlock(uint8_t* pixels, uint16_t x, uint16_t y, uint16_t w, uint16_t h);
extern uint32_t touchgfxDisplayDriverTransmitActive(void);
extern void DisplayDriver_TransferCompleteCallback();
extern void touchgfxSignalVSync(void);

#ifdef __cplusplus
}
#endif

#endif /* INC_TOUCHGFX_DATATRANSFER_H_ */
