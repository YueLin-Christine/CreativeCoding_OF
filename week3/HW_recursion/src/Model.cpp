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
    
    h = 150;
    s = 255;
    b = 255;
    
}


void Model::drawBranch(float x, float y, float diam1, float diam2, float h, float s, float b){
    ofColor c = ofColor::fromHsb(h, s, b);
    ofSetCircleResolution(50);
    ofSetColor(c,200);
    ofNoFill();
    ofDrawEllipse(x, y, diam1, diam2);
    ofTranslate(30*sin(ofGetElapsedTimef()), 30*sin(ofGetElapsedTimef()));
//    diam1 = diam1 * 0.8;
//    diam2 = diam2 * 0.8;
    h = h+10*abs(cos(ofGetElapsedTimef()));
    if(diam1 > 10){
        ofPushMatrix();
        drawBranch(x, y, diam1, diam2, h, s, b);
//        drawBranch(x, y, diam, h, s, b);
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
    drawBranch(posX, posY, diam1, diam2, h, s, b);
}

void Model::update(){
    
}

