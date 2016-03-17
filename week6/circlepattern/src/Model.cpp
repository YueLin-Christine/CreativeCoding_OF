//
//  Model.cpp
//  HW_recursion
//
//  Created by  Christine on 2/23/16.
//
//

#include "Model.hpp"

//set the initial values for the model

//


Model::Model(){
    posX = 0;
    posY = 0;
    
    w = 200;
    h = 200;
    
    r = 255;
    g = 185;
    b = 30;
    a = 40;
    
}


void Model::drawBranch(float x, float y, float w, float h, int r, int g, int b, int a){
    ofSetCircleResolution(50);
    ofSetColor(r,g,b,a);
//    ofNoFill();
    
    ofDrawEllipse(x, y, w, h);
//    ofTranslate(sin(ofGetElapsedTimef())*80,sin(ofGetElapsedTimef())*80);
    w = w * 0.4;
    h = h * 0.4;
    
    if(w > 1){
        ofPushMatrix();
        drawBranch(x+w, y, w, h, r, g, b, a*1.2);
        drawBranch(x-w, y, w, h, r, g, b, a*1.2);
//        drawBranch(x, y+h, w, h, r, g, b, a*1.2);
//        drawBranch(x, y-h, w, h, r, g, b, a*1.2);
        ofPopMatrix();
    }
}

//void Model::setup(float x1, float y1){
//
//}


void Model::draw(){
    drawBranch(posX, posY, w, h, r, g, b, a);
}

void Model::update(){
    
}

