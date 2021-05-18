#include "DrawMode1.h"

DrawMode1::DrawMode1()
{
    this->active = active;
}

void DrawMode1::draw(int x, int y, int n)
{
    if(n!=0){
        int r = (pow(n,3))+(30*n); //recalculates the new decreased radius
        ofDrawCircle(x, y, r);
        draw(x+r, y, n-1); //x+r, shift circles in place so they interlock
        draw(x-r, y, n-1); //x-r
        draw(x, y+r, n-1); //y+r
        draw(x, y-r, n-1); //y-r
    }
}

void DrawMode1::setActivate(bool state) //sets whether the mode is active or not
{
    this->active = state;
}


bool DrawMode1::getActivate()
{
    return this->active;
}