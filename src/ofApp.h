#pragma once
#include "ofMain.h"
#include "DrawMode1.h"
#include "DrawMode2.h"
#include "DrawMode3.h"
#include "DrawMode4.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
	private:
		char mode = '1';
		int depth = 4; //sets the recursion depth
		vector<FractalMode*> fractals; //vector containing each of the draw modes
		bool increaseDepth = false;
		int timer = 0;
};
