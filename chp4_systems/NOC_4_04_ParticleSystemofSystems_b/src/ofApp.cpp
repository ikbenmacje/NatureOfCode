#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255);
    //ofSetBackgroundAuto(false);
    ofEnableSmoothing();
    ofSetFrameRate(30);
    systems.push_back(ParticleSystem(1,ofVec2f(100,25)));
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int i=0;i<systems.size();i++){
        systems[i].run();
        systems[i].addParticle();
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
    systems.push_back(ParticleSystem(1,ofVec2f(x,y)));
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