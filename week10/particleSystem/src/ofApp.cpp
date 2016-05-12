#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofBackground( 255, 255, 255 );
    
    gui.setup();
    
    //Allocate drawing buffer
    int w = ofGetWidth();
    int h = ofGetHeight();
    fbo.allocate(w, h, GL_RGB32F_ARB);
    
    //Fill buffer with white color
    fbo.begin();
    ofBackground(255, 255, 255);
    fbo.end();
    history = 0.9; //controls the trails
    
    time0 = ofGetElapsedTimef();
    bornCount = 0;
    bornRate = 1500;
}

//--------------------------------------------------------------
void ofApp::update(){
    time = ofGetElapsedTimef()*2;
    dt = ofClamp(time - time0, 0, 0.1);
    time0 = time;
    
    for(int i = 0; i<p.size(); i++){
        if(!p[i].live){
            p.erase(p.begin() + i);
        }
    }
    
    bornCount += dt *bornRate;
    if(bornCount>1){
        int bornN = int(bornCount);
        bornCount -= bornN;
        for(int i= 0; i<bornN; i++){
            Particle newp;
            newp.param.setup();
            newp.setup();
            p.push_back(newp);// add this particle to array
        }
    }
    for(int i = 0; i < p.size(); i++){
        p[i].update(dt);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    fbo.begin();
    ofEnableAlphaBlending();
    
    float alpha = (1-history) * 255;
    ofSetColor( 255, 255, 255, alpha);
    ofFill();
    ofDrawRectangle( 0, 0, ofGetWidth(), ofGetHeight() );
    
    ofDisableAlphaBlending();
    

    
    ofFill();
    for(int i = 0; i< p.size(); i++){
        p[i].draw();
    }

 
    fbo.end();
    ofSetColor( 255, 255, 255 );
    fbo.draw( 0, 0 );
    
    gui.draw();
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
