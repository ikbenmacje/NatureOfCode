#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    
    
    startAngle = 0;
    angleVel = 0.05;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
   
    
    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(0);
    
    
    
    startAngle += 0.015;
    float angle = startAngle;
    
    
    for(int x=0; x <= ofGetWidth(); x+=24){
        float y = ofMap(sin(angle), -1, 1, 0, ofGetHeight());
        
        ofEnableAlphaBlending();
        ofNoFill();
        ofSetColor(0);
        ofSetLineWidth(2);
        ofEllipse(x, y, 48, 48);

        
        ofFill();
        ofSetColor(0,50);
        ofEllipse(x, y, 48, 48);
        ofDisableAlphaBlending();
        
        angle += angleVel;
        
    }
    
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