#include "DrawMode2.h"

DrawMode2::DrawMode2()
{
    this->active = active;
}

void DrawMode2::draw(int x, int y, int n) 
{
    drawHelper(200, n, x, y, 30); //parameters other than x, y, and n are constant
}

void DrawMode2::drawHelper(int length, int n, int x, int y, int d) //helper function, d is the value of the degrees
{
    if(n != 0){
        int middleY = y-length;
        int leftBranchX = x -length*cos(PI/180*30);
        int leftBranchY = middleY -length*sin(PI/180*30);
        int rightBranchX = x +length*cos(PI/180*30);
        int rightBranchY = middleY -length*sin(PI/180*30);

        ofDrawLine(x, y, x,y-length);
        ofDrawLine(x, y-length, rightBranchX, rightBranchY);
        ofDrawLine(x,y-length, leftBranchX, leftBranchY);

        drawHelper(length/2, n-1,rightBranchX,rightBranchY, 30);
        drawHelper(length/2,n-1,leftBranchX,leftBranchY, 30);
    }
}

void DrawMode2::setActivate(bool state)
{
    this->active = state;
}

bool DrawMode2::getActivate()
{
    return this->active;
}