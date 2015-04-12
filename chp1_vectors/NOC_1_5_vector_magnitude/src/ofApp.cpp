#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(800, 200);
    ofBackground(255);
    ofSetBackgroundAuto(false);
    ofEnableSmoothing();
    ofSetFrameRate(30);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    
    ofVec2f mouse(mouseX,mouseY);
    ofVec2f center(ofGetWidth()/2,ofGetHeight()/2);
    mouse -= center;
    
    float m = mouse.length();
    
    ofFill();
    ofSetColor(0);
    ofRect(0,0,m,10);
    
    
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    ofSetLineWidth(2);
    ofNoFill();
    ofSetColor(0);
    
    ofLine(0,0,mouse.x,mouse.y);

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