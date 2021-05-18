#include "DrawMode4.h"

DrawMode4::DrawMode4(){
    this->active = active;
}

void DrawMode4::draw(int x, int y, int n){
    drawHelper(x, y, 100, n);
}

void DrawMode4::drawHelper(int x, int y, int z, int n){
    if(n!=0){
        if(n % 2 == 0){  //fills in alternating tiles, like a checkers board
           ofFill();  
        }else{
            ofNoFill();
        }
        ofDrawBox(x, y, z, 100, 100, n); //four squares drawn, one on top of the other at different positions on different calls
        drawHelper(x+100, y, z, n-1); //positions squares in a cross type formation that expands outwards
        drawHelper(x-100, y, z, n-1); //two x translations for squares on the two sides and two y transformations for squares above and below the center one
        drawHelper(x, y+100, z, n-1);
        drawHelper(x, y-100, z, n-1);
    }
}

void DrawMode4::setActivate(bool state)
{
    this->active = state;
}

bool DrawMode4::getActivate()
{
    return this->active;
}