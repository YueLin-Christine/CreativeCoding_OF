#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myImage.load("cat.jpg");
    w = ofGetWidth()*0.5;
    h = ofGetHeight()*0.5;

}

//--------------------------------------------------------------
void ofApp::update(){
    ofBackground(255);
    
    
//    unsigned char *data = new unsigned char[w*h*4];
//    
//    for(int i= 0; i<h; i++){
//        for(int j = 0; j<w; j++){
//            int red = ofMap(ofNoise(sin(ofGetElapsedTimef())), -1, 1, 0, 255);
//            int green = ofMap(ofNoise(cos(ofGetElapsedTimef())), -1, 1, 0, 255);
//            int blue = ofMap(ofNoise(tan(ofGetElapsedTimef())), -1, 1, 0, 255);
//            int alpha = 255;
//            
//            int index = 4 *(j + w * i);
//            cout<< "indexs: " << index << endl;
//            data[index] = red;
//            data[index+1] = green;
//            data[index+2] = blue;
//            data[index+3] = alpha;
//        }
//    }
//    myImage.setFromPixels(data, w, h, OF_IMAGE_COLOR_ALPHA);
//    delete[] data;
    
    int bpp = myImage.getPixels().getBitsPerPixel();
    unsigned char *data = new unsigned char[w*h*4];
        for(int i= 0; i<h; i++){
            for(int j = 0; j<w; j++){
                int red = ofMap(ofNoise(sin(ofGetElapsedTimef())), -1, 1, 0, 255);
                int green = ofMap(ofNoise(cos(ofGetElapsedTimef())), -1, 1, 0, 255);
                int blue = ofMap(ofNoise(tan(ofGetElapsedTimef())), -1, 1, 0, 255);
                int alpha = 255;
    
                int index = 4 *(j + w * i);
                cout<< "indexs: " << index << endl;
                data[index] = red;
                data[index+1] = green;
                data[index+2] = blue;
                data[index+3] = alpha;
            }
        }
        myImage.setFromPixels(data, w, h, OF_IMAGE_COLOR_ALPHA);
        delete[] data;
}

//--------------------------------------------------------------
void ofApp::draw(){
//        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
//    
//    ofSetColor(255, 255, 255, 200);
//    
//    for(int i = 0; i<12; i++){
//        ofPushMatrix();
//        ofRotate(30*i);
//        ofScale(0.1, 0.1);
//        ofEnableBlendMode(OF_BLENDMODE_SCREEN);
//        myImage.draw(0, 0, myImage.getWidth(), myImage.getHeight());
//        ofPopMatrix();
//    }
    

    
    ofBackground(255, 255, 255);
    ofSetColor(255, 255, 255);
    myImage.draw(0,0);


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
