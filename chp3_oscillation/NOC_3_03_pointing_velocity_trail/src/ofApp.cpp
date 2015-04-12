#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(255);
    ofSetBackgroundAuto(false);
    ofEnableSmoothing();
    ofSetFrameRate(60);
   
   
}

//--------------------------------------------------------------
void ofApp::update(){
    
   
    mover.update();
    mover.checkEdges();
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofBackground(255);
    ofEnableAlphaBlending();
    ofFill();
    ofSetColor(255,255,255,5);
    ofRect(0,0,ofGetWidth(),ofGetHeight());
    ofDisableAlphaBlending();
    
    
    mover.display();
    
   
   
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