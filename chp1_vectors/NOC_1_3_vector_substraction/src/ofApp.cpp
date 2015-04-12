#include "ofApp.h"


ofVec2f location(100,100);
ofVec2f velocity(2.5,2);

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(200, 200);
    ofBackground(0, 0, 0);
    ofSetBackgroundAuto(false);
    ofEnableSmoothing();
    ofSetFrameRate(30);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofBackground(255,255,255);
    ofEnableAlphaBlending();
    ofFill();
    ofSetColor(255,10);
    ofRect(0,0,ofGetWidth(),ofGetHeight());
    ofDisableAlphaBlending();
    
    // Add the current speed to the location.
    location += velocity;
    
    if ((location.x > ofGetWidth()) || (location.x < 0)) {
        velocity.x = velocity.x * -1;
    }
    if ((location.y > ofGetHeight()) || (location.y < 0)) {
        velocity.y = velocity.y * -1;
    }
    
    
    // Display circle at x location
    ofSetColor(0);
    ofNoFill();
    ofSetLineWidth(2);
    ofCircle(location.x, location.y, 8);
    
    ofSetColor(127);
    ofFill();
    ofCircle(location.x, location.y, 8);
    
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}