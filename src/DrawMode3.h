#pragma once
#include "FractalMode.h"

class DrawMode3 : public FractalMode
{
    private:
        bool active = false; 

    public:
        DrawMode3();
        void draw(int x, int y, int n);
        void drawHelper(float x, float y, float size, int n); 
        void setActivate(bool state);
        bool getActivate();
};