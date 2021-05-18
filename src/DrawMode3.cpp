#include "DrawMode3.h"

DrawMode3::DrawMode3()
{
    this->active = active;
}

void DrawMode3::draw(int x, int y, int n) 
{
    drawHelper((float) x, 10, (float) y, n); //recast variables to float and adds missing size parameter
}

void DrawMode3::drawHelper(float x, float y, float size, int n){
    if(n == 0) {
        return;
    }

    ofPoint a(x, y);
    ofPoint b(x + size, y);
    ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2));

    ofDrawTriangle(a, b, c);

    drawHelper(x, y, size / 2, n - 1); //draws triangles to the left
    drawHelper((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, n - 1); //draws second triangle in the inner top right
    drawHelper((a.x + c.x) /2, (a.y + c.y) /2 , size/2, n - 1);  //draws "regular" inner triangle (not upside down)
    //the final recursive call works by putting the next point at the center between the the a and c values in both x and y (better seen on paper) => point is at lower left corner of the middle
    
}

void DrawMode3::setActivate(bool state)
{
    this->active = state;
}

bool DrawMode3::getActivate()
{
    return this->active;
}