#pragma once
#include "FractalMode.h"

class DrawMode2 : public FractalMode
{
    private:
        bool active = false; 

    public:
        DrawMode2();
        void draw(int x, int y, int n);
        void drawHelper(int length, int n, int x, int y, int d); //helper function, completes parameters not found in draw but unique to the current draw mode
        void setActivate(bool state);
        bool getActivate();
};