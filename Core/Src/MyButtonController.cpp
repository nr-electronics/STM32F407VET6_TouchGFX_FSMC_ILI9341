#include <MyButtonController.hpp>
#include <main.h>
#include <touchgfx/hal/HAL.hpp>

extern "C" {
	extern uint8_t userButtonState;
}

void MyButtonController::init()
{
	__NOP();
}

bool MyButtonController::sample(uint8_t& key)
{

		if (userButtonState == 0)
		{
			userButtonState = 255;
			key = 0;
			return true;
		}
		else if (userButtonState == 1)
		{
			userButtonState = 255;
			key = 1;
			return true;
		}
		else
		{
			__NOP();
		}

	return false;
}


