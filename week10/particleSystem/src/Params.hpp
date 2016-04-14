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
#include "ofMain.h"
//#include "Particle.hpp"


class Params{
public:
    void setup(); // center of the emitter
    ofPoint eCenter; //radius of emitter
    float eRad; // radius of emitter
    float velRad; //max velocity
    float lifeTime; //max life
    float rotate; //rotation amount
    
    //homework setup one forces
    //add a GUI for it
    float attraction;
    float reposion;
    float friction;
    float spinning;
};



#endif /* Params_hpp */