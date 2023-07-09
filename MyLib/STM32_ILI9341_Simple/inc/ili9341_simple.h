
#ifndef ILI9341_LIGHT_H_
#define ILI9341_LIGHT_H_

#include <stdbool.h>
#include <stdint.h>

/*---------------------------------------------------------------------*/
// Register names from Peter Barrett's Microtouch code
#define	ILI9341_NOP					0x00
#define ILI9341_SOFTRESET			0x01
#define ILI9341_READID				0x04
#define ILI9341_READSTATUS			0x09
#define ILI9341_READPOWERMODE		0x0A
#define ILI9341_READMADCTL			0x0B
#define ILI9341_READPIXELFORMAT		0x0C
#define ILI9341_READIMAGEFORMAT		0x0D
#define ILI9341_READSIGNALMODE		0x0E
#define ILI9341_READSELFDIAGNOSTIC	0x0F
#define ILI9341_SLEEPIN				0x10
#define ILI9341_SLEEPOUT			0x11
#define ILI9341_PARTIALMODE			0x12
#define ILI9341_NORMALDISP			0x13
#define ILI9341_INVERTOFF			0x20
#define ILI9341_INVERTON			0x21
#define ILI9341_GAMMASET			0x26
#define ILI9341_DISPLAYOFF			0x28
#define ILI9341_DISPLAYON			0x29
#define ILI9341_COLADDRSET			0x2A
#define ILI9341_PAGEADDRSET			0x2B
#define ILI9341_MEMORYWRITE			0x2C
#define ILI9341_COLORSET			0x2D
#define ILI9341_MEMORYREAD			0x2E
#define ILI9341_PARTIALAREA			0x30
#define ILI9341_VERTICALSCROLING	0x33
#define ILI9341_TEARINGEFFECTOFF	0x34
#define ILI9341_TEARINGEFFECTON		0x35
#define ILI9341_MEMCONTROL			0x36
#define ILI9341_VSCROLLSTARTADDRESS	0x37
#define ILI9341_IDLEMODEOFF			0x38
#define ILI9341_IDLEMODEON			0x39
#define ILI9341_PIXELFORMAT			0x3A
#define ILI9341_WRITEMEMCONTINUE	0x3C
#define ILI9341_READMEMCONTINUE		0x3E
#define ILI9341_SETSCANLINE			0x44
#define ILI9341_GETSCANLINE			0x45
#define ILI9341_WRITEBRIGHTNESS		0x51
#define ILI9341_READBRIGHTNESS		0x52
#define ILI9341_WRITECTRL			0x53
#define ILI9341_READCTRL			0x54
#define ILI9341_WRITECABC			0x55
#define ILI9341_READCABC			0x56
#define ILI9341_WRITECABCMIN		0x5E
#define ILI9341_READCABCMIN			0x5F
#define ILI9341_RGBSIGNALCONTROL	0xB0
#define ILI9341_FRAMECONTROLNORMAL	0xB1
#define ILI9341_FRAMECONTROLIDLE	0xB2
#define ILI9341_FRAMECONTROLPARTIAL	0xB3
#define ILI9341_INVERSIONCONTROL	0xB4
#define ILI9341_BLANKINGPORCHCONT	0xB5
#define ILI9341_DISPLAYFUNC			0xB6
#define ILI9341_ENTRYMODE			0xB7
#define ILI9341_BACKLIGHTCONTROL1	0xB8
#define ILI9341_BACKLIGHTCONTROL2	0xB9
#define ILI9341_BACKLIGHTCONTROL3	0xBA
#define ILI9341_BACKLIGHTCONTROL4	0xBB
#define ILI9341_BACKLIGHTCONTROL5	0xBC
#define ILI9341_BACKLIGHTCONTROL7	0xBE
#define ILI9341_BACKLIGHTCONTROL8	0xBF
#define ILI9341_POWERCONTROL1		0xC0
#define ILI9341_POWERCONTROL2		0xC1
#define ILI9341_VCOMCONTROL1		0xC5
#define ILI9341_VCOMCONTROL2		0xC7
#define ILI9341_NVMEMORYWRITE		0xD0
#define ILI9341_NVMEMORYKEY			0xD1
#define ILI9341_NVMEMORYSTATUSREAD	0xD2
#define ILI9341_READID4				0xD3
#define ILI9341_READID1				0xDA
#define ILI9341_READID2				0xDB
#define ILI9341_READID3				0xDC
#define ILI9341_POSITIVEGAMMCORR	0xE0
#define ILI9341_NEGATIVEGAMMCORR	0xE1
#define ILI9341_DIGITALGAMMCONTROL1	0xE2
#define ILI9341_DIGITALGAMMCONTROL2	0xE3
#define ILI9341_INTERFACECONTROL	0xF6

#define ILI9341_MADCTL_MY			0x80
#define ILI9341_MADCTL_MX			0x40
#define ILI9341_MADCTL_MV			0x20
#define ILI9341_MADCTL_ML			0x10
#define ILI9341_MADCTL_RGB			0x00
#define ILI9341_MADCTL_BGR			0x08
#define ILI9341_MADCTL_MH			0x04

// Basic Color definitions
#define	COLOR_BLACK                 (uint16_t)(0x0000)
#define	COLOR_BLUE                  (uint16_t)(0x001F)
#define	COLOR_RED                   (uint16_t)(0xF800)
#define	COLOR_GREEN                 (uint16_t)(0x07E0)
#define COLOR_CYAN                  (uint16_t)(0x07FF)
#define COLOR_MAGENTA               (uint16_t)(0xF81F)
#define COLOR_YELLOW                (uint16_t)(0xFFE0)
#define COLOR_WHITE                 (uint16_t)(0xFFFF)

#define LCD_BASE0        		((uint32_t)0x60000000)
#define LCD_BASE1        		((uint32_t)0x60080000)
//#define LCD_BASE0        		((uint32_t)0x6C000000)
//#define LCD_BASE1        		((uint32_t)0x6C002000)

#define LCD_CmdWrite(command)	*(volatile uint16_t *) (LCD_BASE0) = (command)
#define LCD_DataWrite(data)		*(volatile uint16_t *) (LCD_BASE1) = (data)
#define	LCD_StatusRead()		*(volatile uint16_t *) (LCD_BASE0) //if use read  Mcu interface DB0~DB15 needs increase pull high
#define	LCD_DataRead()			*(volatile uint16_t *) (LCD_BASE1) //if use read  Mcu interface DB0~DB15 needs increase pull high

#define LCD_BL_ON() HAL_GPIO_WritePin(LCD_BL_GPIO_Port, LCD_BL_Pin, GPIO_PIN_SET)
#define LCD_BL_OFF() HAL_GPIO_WritePin(LCD_BL_GPIO_Port, LCD_BL_Pin, GPIO_PIN_RESET)

#define ILI9341_PIXEL_WIDTH		240
#define ILI9341_PIXEL_HEIGHT 	320

typedef enum
{
	LCD_ORIENTATION_PORTRAIT 			= 0,
	LCD_ORIENTATION_LANDSCAPE 			= 1,
	LCD_ORIENTATION_PORTRAIT_MIRROR 	= 2,
	LCD_ORIENTATION_LANDSCAPE_MIRROR 	= 3
} lcdOrientationTypeDef;

// This struct is used to indicate the capabilities of different LCDs
typedef struct
{
  uint16_t				width;         // LCD width in pixels (default orientation)
  uint16_t				height;        // LCD height in pixels (default orientation)
  lcdOrientationTypeDef	orientation;   // Whether the LCD orientation can be modified
  bool					touchscreen;   // Whether the LCD has a touch screen
  bool					hwscrolling;   // Whether the LCD support HW scrolling
} lcdPropertiesTypeDef;

void lcdInit(void);
void lcdBacklightOff(void);
void lcdBacklightOn(void);
void lcdSetOrientation(lcdOrientationTypeDef orientation);
void lcdSetWindow(unsigned short x0, unsigned short y0, unsigned short x1, unsigned short y1);
void lcdTest(void);
/*---------------------------------------------------------------------*/

#endif /* LI9341_LIGHT_H_ */
