#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(255);
    ofSetBackgroundAuto(false);
    ofEnableSmoothing();
    ofSetFrameRate(60);
    
    for(int i=0;i<20;i++){
        movers.push_back(Mover(ofRandom(0.1,2),ofRandom(ofGetWidth()),ofGetHeight()));
    }
   
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i=0;i<movers.size();i++){
        ofVec2f force = a.attract(movers[i]);

        movers[i].applyForce(force);
        movers[i].update();
        
    }
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofBackground(255);
    ofEnableAlphaBlending();
    ofFill();
    ofSetColor(255,5);
    ofRect(0,0,ofGetWidth(),ofGetHeight());
    ofDisableAlphaBlending();

    
    a.drag();
    a.hover(ofGetMouseX(),ofGetMouseY());
    
        a.display();
    
    for(int i=0;i<movers.size();i++){
        movers[i].display();
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
    a.clicked(x,y);

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    a.stopDragging();
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