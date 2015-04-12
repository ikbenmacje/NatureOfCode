#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    r = ofGetHeight() * 0.45;
    theta = 0;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
   
    
   
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    float x = r * cos(theta);
    float y = r * sin(theta);
    
    
    ofNoFill();
    ofSetColor(0);
    ofSetLineWidth(2);
    
    ofLine(0, 0, x, y);
    
    ofFill();
    ofSetColor(127);
    
    ofEllipse(x, y, 48, 48);
   
    theta +=0.02;

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