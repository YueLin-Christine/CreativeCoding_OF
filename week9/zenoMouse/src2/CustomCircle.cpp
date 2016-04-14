//
//  CustomCircle.cpp
//  zenoMouse
//
//  Created by  Christine on 4/10/16.
//
//

#include "CustomCircle.hpp"

CustomCircle::CustomCircle() {
    
}

void CustomCircle::setup(ofVec2f _initPos) {
    currentPos = _initPos;
}

void CustomCircle::update(ofVec2f _mouse) {
    
    pct = 0.05;
    currentPos = currentPos * (1 - pct) + _mouse * pct;
    
}

void CustomCircle::draw() {
    
    ofDrawCircle(currentPos, 20);
}