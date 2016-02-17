#include "ofApp.h"

//void ofApp::drawCircle(float x, float y, float diam){
//    
//    ofDrawEllipse(x, y, diam, diam);
//    diam = diam*.7;
//    if(diam > 5){
//        drawCircle(x, y, diam);
//    }
//    
//}

void ofApp::drawBranch(float length, float theta){
//    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofDrawLine(0, 0, 0, -length);
    ofTranslate(0,-length);
    length = length * .7;
    
    if(length >20){
        ofPushMatrix();
        ofRotate(theta);
        drawBranch(length, theta);
        ofPopMatrix();
        
        
        ofPushMatrix();
        ofRotate(-theta);
        drawBranch(length, theta);
        ofPopMatrix();
    }
    
}

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
//    
//    ofNoFill();
//    drawCircle(ofGetWidth()/2, ofGetHeight()/2, 500);
    
    
    ofSetColor(0, 255, 0);
    
    ofTranslate(ofGetWidth()/2, ofGetHeight());
    
//    ofDrawLine(0, 0, 0, -200);
//    
//    ofSetColor(255, 0, 0);
//    ofNoFill();
//    ofTranslate(0, -200);
//    ofRotate(45);
//    ofDrawLine(0, 0, 0, -200);
    
    drawBranch(200, sin(ofGetElapsedTimef())*80);//pass data
    
    
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
