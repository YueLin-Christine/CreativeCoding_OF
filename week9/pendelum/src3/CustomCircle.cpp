//
//  CustomCircle.cpp
//  pendelum
//
//  Created by  Christine on 4/10/16.
//
//

#include "CustomCircle.hpp"

CustomCircle::CustomCircle() {
    //initial
    posA.x = ofGetWidth()/2;
    posA.y = ofGetHeight()/2;
    
    //final
    posB.x = ofGetWidth();
    posB.y = ofGetHeight()/2;
}


void CustomCircle::draw() {
    ofDrawEllipse(pos.x, pos.y, 20, 20);
}

void CustomCircle::interpolateByPct(float myPct){
    pct = powf(myPct, 0.1);
    pos.x = (1-pct)*posA.x + pct*posB.x;
    pos.y = (1-pct)*posA.y + pct*posB.y;

}