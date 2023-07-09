#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>

class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }

    virtual void updateTime(uint8_t hour, uint8_t minute, uint8_t second) {}

protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
