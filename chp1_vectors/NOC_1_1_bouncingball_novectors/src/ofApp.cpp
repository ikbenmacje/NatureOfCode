#include "ofApp.h"


// Example 1-1: Bouncing Ball, no vectors
// could also define them in the .h file but then need to give them value in the setup fucntion
float x = 100;
float y = 100;
float xspeed = 2.5;
float yspeed = 2;

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(30);

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(255,255,255);
    
    // Add the current speed to the location.
    x = x + xspeed;
    y = y + yspeed;
    
    if ((x > ofGetWidth()) || (x < 0)) {
        xspeed = xspeed * -1;
    }
    if ((y > ofGetHeight()) || (y < 0)) {
        yspeed = yspeed * -1;
    }
    
    
    // Display circle at x location
    ofSetColor(0);
    ofNoFill();
    ofSetLineWidth(2);
    ofCircle(x, y, 48);
    
    ofSetColor(127);
    ofFill();
    ofCircle(x, y, 48);

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}