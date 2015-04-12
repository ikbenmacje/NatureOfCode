#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255);
    //ofSetBackgroundAuto(false);
    ofEnableSmoothing();
    ofSetFrameRate(30);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    particles.push_back(Particle(ofVec2f(ofGetWidth()/2,20)));
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofEnableAlphaBlending();
    for(int i=0;i<particles.size();i++){
        particles[i].run();
        
        if(particles[i].isDead()){
            particles.erase(particles.begin()+i);
        }
         
    }
    ofDisableAlphaBlending();
    
 

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    particles.push_back(Particle(ofVec2f(ofGetWidth()/2,20)));

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