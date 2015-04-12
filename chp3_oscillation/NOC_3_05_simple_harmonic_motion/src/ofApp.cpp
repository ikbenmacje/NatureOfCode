#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
   
    float period = 120;
    float amplitude = 300;
    
    float x = amplitude * cos(TWO_PI * ofGetFrameNum() / period);
   
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
      
    ofNoFill();
    ofSetColor(0);
    ofSetLineWidth(2);
    
    ofLine(0, 0, x, 0);
    
    ofFill();
    ofSetColor(127);
    
    ofEllipse(x, 0, 48, 48);
   
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