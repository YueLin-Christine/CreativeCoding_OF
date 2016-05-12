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
//    eRad = 50;
//    velRad = 200;
//    lifeTime = 1.0;
//    rotate = 90;
//    
//    force = 1000;
//    spinning = 1000;
//    friction = 0.05;

//    eRad = 100;
//    velRad = 0;
//    lifeTime = 2.0;
//    rotate = 0;
//    
//    force = 1000;
//    spinning = 1000;
//    friction = 0.05;

//    eRad = 300;
//    velRad = 0;
//    lifeTime = 3.0;
//    rotate = 500;
//    
//    force = -1000;
//    spinning = 1000;
//    friction = 0.05;
    
    parameters.setName("Parameters");
    
    parameters.add(eRad.set("eRad", 50, 1, 300));//8: default value, range:1-15
    parameters.add(velRad.set("velRad", 200, 0, 400));
    parameters.add(lifeTime.set("lifeTime", 1.0, 0.1, 5.0));
    parameters.add(rotate.set("rotate", 90, 0, 900));

    parameters.add(force.set("force", 0, -1000, 1000));
    parameters.add(spinning.set("spinning", 1000, 0, 1000));
    parameters.add(friction.set("friction", 0.05, 0, 0.1));
    
}