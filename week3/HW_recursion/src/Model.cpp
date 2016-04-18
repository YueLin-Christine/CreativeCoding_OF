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
    diam1 = 100;
    diam2 = 100;
    
    r = 255;
    g = 255;
    b = 255;
    
}


void Model::drawBranch(float x, float y, float diam1, float diam2, int r, int g, int b){
    ofColor c = ofColor::fromHsb(r, g, b);
    ofSetCircleResolution(50);
    ofSetColor(255,0,0,200);
    
    ofNoFill();
    ofDrawEllipse(x, y, diam1, diam2);
    ofTranslate(0,30);
    diam1 = diam1 * 0.8;
    diam2 = diam2 * 0.8;
//    r = r+10*abs(cos(ofGetElapsedTimef()));
    if(diam1 > 10){
//        ofPushMatrix();
        drawBranch(x, y, diam1, diam2, r, g, b);
//        drawBranch(x, y, diam, h, s, b);
//        ofPopMatrix();
    }

}

void Model::setup(float x1, float y1){

}


void Model::draw(){
    drawBranch(posX, posY, sin(ofGetElapsedTimef())*diam1, sin(ofGetElapsedTimef())*diam2, r, g, b);
//    drawBranch(posX, posY, diam1, diam2, r, g, b);
}

void Model::update(){
    
}

