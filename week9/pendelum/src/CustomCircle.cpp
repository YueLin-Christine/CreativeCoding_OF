//
//  CustomCircle.cpp
//  pendelum
//
//  Created by  Christine on 4/10/16.
//
//

#include "CustomCircle.hpp"

CustomCircle::CustomCircle() {
//    gravity = 0.4f;
}

void CustomCircle::setup(float _posX, float _posY) {
    posX = _posX;
    posY = _posY;
    diam = 20;
    gravity = 0.4f;
    angle = pi/4;
    
    aVel = 0.01f;

}

void CustomCircle::update() {
    armLength = ofGetWidth()/2;
    aAcc = (-gravity/armLength) * sin(angle);
    aVel += aAcc;
    angle += aVel;
    
}

void CustomCircle::draw() {
    posX = sin(angle) * armLength;
    posY = cos(angle) * armLength;
    ofDrawEllipse(posX, posY, diam, diam);
    
}