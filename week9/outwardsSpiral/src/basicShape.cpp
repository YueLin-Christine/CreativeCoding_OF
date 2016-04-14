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
    diam = 20;
    gravity = 0.4f;
    angle = pi;
    aVel = 0.01f;
}

void basicShape::update(){
//    armLength += 4;
//    aAcc = (-gravity/armLength)*sin(angle);
//    aVel += aAcc;
//    angle += aVel;
    angle += 0.1;
}

void basicShape::draw(){
    posX = sin(angle) * armLength;
    posY = cos(angle) * armLength;
    ofDrawEllipse(posX, posY, diam, diam);
}