//
//  Alien.cpp
//  manyClasses
//
//  Created by  Christine on 2/10/16.
//
//

#include "Alien.hpp"
//#include "ofMain.h"

Alien::Alien(){
    //declare variables:
//    xPos = ofRandom(0, ofGetWidth());
//    yPos = ofRandom(0, ofGetHeight());
    velX = ofRandom(-3,3);
    velY = ofRandom(-3,3);
    diam = 100;
}


void Alien::setup(float _x, float _y){
    xPos = _x;
    yPos = _y;
    r = ofRandom(255);
    g = ofRandom(255);
    b = ofRandom(255);
    
}

void Alien::draw(){
    ofSetColor(r,g,b);
    ofFill();
    ofDrawEllipse(xPos, yPos, diam, diam);
}

void Alien::update(){
    xPos += velX;
    yPos += velY;
    if(xPos > ofGetWidth()-diam/2 || xPos < diam/2){
        velX = -velX;
    }
    if(yPos > ofGetHeight()-diam/2 || yPos <diam/2){
        velY = -velY;
    }
}