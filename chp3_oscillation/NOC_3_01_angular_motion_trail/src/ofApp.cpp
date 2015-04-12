#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    ofBackground(255);
    
    aAcceleration = 0.001;
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofBackground(255);
    ofEnableAlphaBlending();
    ofSetColor(255,5);
    ofRect(0,0,ofGetWidth(),ofGetHeight());
    ofDisableAlphaBlending();
   
    
   
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    ofRotate(angle);
        
    ofNoFill();
    ofSetColor(0);
    ofSetLineWidth(2);
    
    ofLine(-60, 0, 60, 0);
    
    ofFill();
    ofSetColor(127);
    
    ofEllipse(60, 0, 16, 16);
    ofEllipse(-60, 0, 16, 16);
    
    angle += aVelocity;
    aVelocity += aAcceleration;

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