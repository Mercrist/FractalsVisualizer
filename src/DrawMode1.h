#pragma once
#include "FractalMode.h"

class DrawMode1 : public FractalMode
{
    private:
        bool active = true; //activates the fractal mode
        
    public:
        DrawMode1();
        void draw(int x, int y, int n);
        void setActivate(bool state);
        bool getActivate();
};