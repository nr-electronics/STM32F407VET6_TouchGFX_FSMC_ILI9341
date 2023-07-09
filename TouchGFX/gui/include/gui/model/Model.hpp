#ifndef MODEL_HPP
#define MODEL_HPP

#include "main.h"

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();
    void HW_GetTime(void);
    void HW_SetTime(uint8_t hours, uint8_t minutes, uint8_t seconds);
protected:
    ModelListener* modelListener;
};

#endif // MODEL_HPP
