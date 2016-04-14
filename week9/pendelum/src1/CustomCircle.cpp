//
//  CustomCircle.cpp
//  pendelum
//
//  Created by  Christine on 4/10/16.
//
//

#include "CustomCircle.hpp"

CustomCircle::CustomCircle() {
    
}

void CustomCircle::setup(float _posX, float _posY) {
    posX = _posX;
    posY = _posY;
    amplitude = 10;
    speed = 20;
}

void CustomCircle::update() {

    
    if(posX > ofGetWidth() || posX <0){
        speed = -speed;
    }
    posX+=speed;
    
    
}
void CustomCircle::draw() {
    
    ofDrawEllipse(posX, posY, 20, 20);
    
}