#include "FractalMode.h"

class DrawMode4 : public FractalMode{ //custom draw mode
    private:
        bool active = false;
         
    public:
        DrawMode4();
        void draw(int x, int y, int n);
        void drawHelper(int x, int y, int z, int n);
        void setActivate(bool state);
        bool getActivate();
};