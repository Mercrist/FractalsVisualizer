#pragma once
#include "ofMain.h" //includes OF files in every subclass

class FractalMode 
{
    public: 
        virtual void draw(int x, int y, int n) = 0; //all draw methods have these 3 parameters in common
        virtual void setActivate(bool) = 0;
        virtual bool getActivate() = 0;
};