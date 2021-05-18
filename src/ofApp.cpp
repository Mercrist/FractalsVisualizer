#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    fractals.push_back(new DrawMode1());
    fractals.push_back(new DrawMode2());
    fractals.push_back(new DrawMode3());
    fractals.push_back(new DrawMode4());
    ofSetColor(ofRandom(256), ofRandom(256), ofRandom(256));   
}

//--------------------------------------------------------------
void ofApp::update(){
    /* The update method is called muliple times per second
    It's in charge of updating variables and the logic of our app */
    ofSetBackgroundColor(0,0,0);
    if(increaseDepth)
    {
        timer++;

        if(timer%180 == 0) //called 60 times a second, for 3 seconds is around a value of 180 frames, modulus checks for multiples of 180
            depth++;

        if(timer >= 1620) //called 180 times per depth level, for 8 depth levels, increase timer up to 1620 (depth starts at 0)
        {
            timer = 0;
            increaseDepth = false;
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    /* The update method is called muliple times per second
    It's in charge of drawing all figures and text on screen */
    ofNoFill();
    if(fractals[0]->getActivate()){ //checks if each mode is active or not and draws them
        fractals[0]->draw(ofGetWidth()/2, ofGetHeight()/2, depth);

    }if(fractals[1]->getActivate()){
        fractals[1]->draw(ofGetWidth()/2, ofGetHeight()-50, depth);
        
    }if(fractals[2]->getActivate()){
        fractals[2]->draw(ofGetWidth()/3, ofGetHeight()/2, depth);

    }if(fractals[3]->getActivate()){
        fractals[3]->draw(ofGetWidth()/2, ofGetHeight()/2, depth);
    }
    if(increaseDepth){ //lets us know when the depth is being increased and what recursion level we're currently seeing
        ofDrawBitmapString("Recursion depth being increased! Current depth: " + to_string(depth), ofGetWidth()-400, ofGetHeight()-10); 
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    // This method is called automatically when any key is pressed
    switch(key){
        case '1':
            ofSetColor(ofRandom(256), ofRandom(256), ofRandom(256));
            fractals[0]->setActivate(!fractals[0]->getActivate()); //activates a fractal mode based on whether it was active or not
            break;

        case '2':
            ofSetColor(ofRandom(256), ofRandom(256), ofRandom(256));
            fractals[1]->setActivate(!fractals[1]->getActivate());
            break;

        case '3':
            ofSetColor(ofRandom(256), ofRandom(256), ofRandom(256));
            fractals[2]->setActivate(!fractals[2]->getActivate());
            break;

        case '4':
            ofSetColor(ofRandom(256), ofRandom(256), ofRandom(256));
            fractals[3]->setActivate(!fractals[3]->getActivate());
            break;

        case '-':
            if (depth > 0 && !increaseDepth) //dont decrease depth into negative numbers, dont increase depth when spacebars been pressed
                depth--;
            break;

        case '=':
        if (depth < 9 && !increaseDepth) //program slows down and basically becomes unresponsive past this value for the circles draw mode
            depth++;
        break;

        case ' ': //slowly increases the depth
        if(!increaseDepth)
        {
            increaseDepth = true;
            depth = 0;
        }
        break;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}