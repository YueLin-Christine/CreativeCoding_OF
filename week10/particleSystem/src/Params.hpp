//
//  Params.hpp
//  particleSystem
//
//  Created by  Christine on 4/13/16.
//
//

#ifndef Params_hpp
#define Params_hpp

#include <stdio.h>
#include "ofParameterGroup.h"
#include "ofParameter.h"
#include "ofMain.h"
//#include "Particle.hpp"


class Params{
public:
    void setup();
    ofPoint eCenter; // emitter center
    
//    float eRad; // emitter radius
//    float velRad; //initial velocity limit
//    float lifeTime; //lifetime in seconds
//    float rotate; //Direction rotation speed in angles per second
//    
//    //homework setup one forces
//    //add a GUI for it
////    float attraction;
////    float reposion;
//    
//    float force;
//    float friction;
//    float spinning;

    ofParameterGroup parameters;
    ofParameter<float> eRad;
    ofParameter<float> velRad;
    ofParameter<float> lifeTime;
    ofParameter<float> rotate;
    
    ofParameter<float> force;
    ofParameter<float> friction;
    ofParameter<float> spinning;
    
};



#endif /* Params_hpp */