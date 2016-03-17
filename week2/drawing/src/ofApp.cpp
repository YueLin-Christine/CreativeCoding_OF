#include "ofApp.h"

void ofApp::diamond(ofPoint center, float width, float height){
    //line1
    ofDrawLine(center.x-width/2, center.y, center.x, center.y-height/2);
    
    //line2
    ofDrawLine(center.x, center.y-height/2, center.x+width/2, center.y);
    
    //line3
    ofDrawLine(center.x+width/2, center.y, center.x, center.y+height/2);
    
    //line4
    ofDrawLine(center.x, center.y+height/2, center.x-width/2, center.y);
    
}

//--------------------------------------------------------------
void ofApp::setup(){
    // stops it from drawing continuous background
//    ofSetBackgroundAuto(false);
    
    circleX = 0;
    center2.x = ofGetWidth()/2;
    center2.y = ofGetHeight()/2;
    height2 = 300;
    width2 = 300;
    

}

//--------------------------------------------------------------
void ofApp::update(){
    circleX +=5;


}

//--------------------------------------------------------------
void ofApp::draw(){
//    //change the background
//    ofBackground(0);
//    // set color for drawing
//    ofSetColor(255, 0, 0);
//    ofDrawEllipse(circleX, ofGetHeight()/2, 200, 200);
//    //add text to the screen
//    ofDrawBitmapString("hello world", 100, 100);
//    
////    cout <<"hello world!" << endl;
//    cout << "circleX:" << circleX <<endl;
    
    diamond(center2, width2, height2);

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
