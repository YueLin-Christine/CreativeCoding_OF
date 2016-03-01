#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    current = "A";
    next = "";
    count = 0;
    xPos = ofGetWidth()/2;
    mover = 10;
    screenText = false;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    if(screenText == true){
        ofDrawBitmapString("generation" + ofToString(count) + ":", 10, mover);
        ofDrawBitmapString(current, xPos, mover);
        //ofToString(x), change x to string "x";
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
    for(int i = 0; i< current.size(); i++){
        char checker = current[i];
        if(checker == 'A'){
            next += "AB";
            xPos -= current.size();
        }else if(checker =='B'){
            next += "A";
            xPos += current.size();
        }
    }
    current = next;
    count++;
    mover+=20;
    screenText = true;

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    screenText = false;
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
