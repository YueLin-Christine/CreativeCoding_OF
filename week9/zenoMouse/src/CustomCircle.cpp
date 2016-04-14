//
//  CustomCircle.cpp
//  zenoMouse
//
//  Created by  Christine on 4/10/16.
//
//

#include "CustomCircle.hpp"

CustomCircle::CustomCircle(){
    //initial position
    posA.x = 10;
    posA.y = 10;
    
}

//void CustomCircle::update(){
////    posB.x = ofGetMouseX();
////    posB.y = ofGetMouseY();
//}

void CustomCircle::draw(){
    ofDrawEllipse(pos.x, pos.y, 30, 30);
}

void CustomCircle::interpolateByPct(float myPct){
    pct = powf(myPct, 0.1); // myPct^2=myPct*myPct
    pos.x = (1 - pct)*posA.x + pct*posB.x;
    pos.y = (1 - pct)*posA.y + pct*posB.y;
}

void CustomCircle::zenoToPoint(float catchX, float catchY){
    
    pos.x = catchUpSpeed*catchX + (1 - catchUpSpeed)*pos.x;
    pos.y = catchUpSpeed*catchY + (1 - catchUpSpeed)*pos.y;
    
}