//
//  Particle.hpp
//  particleSystem
//
//  Created by  Christine on 4/13/16.
//
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Params.hpp"
#include "ofxGui.h"

//variables

class Particle{
public:
    //constructor
    Particle();
    
    //method
    void setup();
    void update(float dt); //dt stands for time step: the time in seconds between the current and the previous callings of this function. used for physics computing.
    void draw();
    
    Params param;
    ofParameterGroup particleParamGroup;
    
    ofPoint pos;
    ofPoint vel;
    float time; //the time it's been alive, color and size will be calculated based on this
    float lifeTime; //constant, maxTime of living for particle
    bool live;
    
    ofPoint randomPointInCircle(float maxRad);
//    ofxPanel gui;
};

#endif /* Particle_hpp */
