//
//  basicShape.cpp
//  outwardsSpiral
//
//  Created by  Christine on 4/12/16.
//
//

#include "basicShape.hpp"

basicShape::basicShape(){
    
}

void basicShape::setup(float _posX, float _posY){
    posX = _posX;
    posY = _posY;
    amplitude = ofGetHeight()/2;
    period = 25;
    diam = 20;

}

void basicShape::update(){
    sine = sin(ofGetElapsedTimef());
//    posX = ofMap(sine, -1, 1, 0, ofGetWidth());
//    posY = ofMap(sine, -1, 1, 0, ofGetHeight()/2);
    posX = ofGetElapsedTimef()*period;
    posY = amplitude*sin(ofGetElapsedTimef());
    
}

void basicShape::draw(){
    ofDrawEllipse(posX, posY, diam, diam);
}