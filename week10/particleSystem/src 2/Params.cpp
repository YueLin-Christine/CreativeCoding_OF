//
//  Params.cpp
//  particleSystem
//
//  Created by  Christine on 4/13/16.
//
//

#include "Params.hpp"

void Params::setup(){
    eCenter = ofPoint(ofGetWidth()/2, ofGetHeight()/2);
    eRad = 50;
    velRad = 200;
    lifeTime = 2.0;
    rotate = 90;
    
    force = -1000;
    spinning = 1000;
    friction = 0.05;
    
    
}