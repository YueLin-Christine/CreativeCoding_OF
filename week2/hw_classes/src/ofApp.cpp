#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);

}

//--------------------------------------------------------------
void ofApp::update(){
    mimi.talk();

}

//--------------------------------------------------------------
void ofApp::draw(){
    mimi.body();
    mimi.eye();
    mimi.mouth();
//    mimi.fart();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'f'){
        mimi.fart();
    }

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
    
//    ofBackground(0);
//    meow.body();
//    meow.blink();
//    meow.mouth();

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
