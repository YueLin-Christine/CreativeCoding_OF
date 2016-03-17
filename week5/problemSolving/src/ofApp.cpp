#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(1);
    ofEnableSmoothing();
    
    //give an initial number to dotSize angleOffSetA
    me.dotSize = 10.0f;
    me.angleOffSetA = ofDegToRad(1.5);
    me.angleOffSetB = ofDegToRad(50);
    
    
    gui.setup(); //setups the panel
    gui.add(dotSize.setup("dotsize", 8, 1, 15));//8: default value, range:1-15
    gui.add(angleA.setup("angleA", 1.5, 1, 5));
    gui.add(angleB.setup("angleB", 1.5, 1, 5));
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    me.dotSize = dotSize;//whenver change the panel value, it will pass that value to me.dotSize
    me.angleOffSetA = ofDegToRad(angleA);
    me.angleOffSetB = ofDegToRad(angleB);
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    
    ofTranslate(ofGetWidth()/2, ofGetHeight());
    me.seed1(me.dotSize, ofDegToRad(260), 0, 0);
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
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
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
