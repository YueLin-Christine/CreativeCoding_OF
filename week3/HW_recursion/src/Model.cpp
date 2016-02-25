//
//  Model.cpp
//  HW_recursion
//
//  Created by  Christine on 2/23/16.
//
//

#include "Model.hpp"

Model::Model(){
    posX = ofGetWidth()/2;
    posY = ofGetHeight()/2;
    diam = 600;
    
    h = 150;
    s = 255;
    b = 255;
    
}


void Model::drawBranch(float x, float y, float diam, float h, float s, float b){
    ofColor c = ofColor::fromHsb(h, s, b);
    ofSetCircleResolution(50);
    ofSetColor(c,100);
//    ofNoFill();
    ofDrawEllipse(x, y, diam, diam);
    ofTranslate(diam/6*sin(ofGetElapsedTimef()), diam/6*sin(ofGetElapsedTimef()));
    diam = diam *0.7;
    h = h+0.8*sin(ofGetElapsedTimef());
    if(diam >10){
        ofPushMatrix();
        drawBranch(x, y, diam, h, s, b);
        ofPopMatrix();
    }

}

void Model::setup(float x1, float y1){
//    posX = x1;
//    posY = y1;

//    h = ofRandom(200,300);
//    s = ofRandom(40,60);
//    l = ofRandom(50,70);
//    a = 0.6;
}


void Model::draw(){
//    drawBranch(posX, posY, sin(ofGetElapsedTimef())*diam, r, g, b);
    drawBranch(posX, posY, diam, h, s, b);
}

void Model::update(){
    
}

