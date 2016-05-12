//
//  Particle.cpp
//  particleSystem
//
//  Created by  Christine on 4/13/16.
//
//

#include "Particle.hpp"

Particle::Particle(){
    live = false;
    
}

ofPoint Particle::randomPointInCircle(float maxRad){
    ofPoint pnt;
    float rad = ofRandom(0, maxRad);
    float angle = ofRandom(0, TWO_PI);
    pnt.x = cos(angle)*rad;
    pnt.y = sin(angle)*rad;
    return pnt;
    
}

void Particle::setup(){
    param.setup();
    particleParamGroup.add(param.parameters);

    
    pos = param.eCenter + randomPointInCircle(param.eRad);//?????
    vel = randomPointInCircle(param.velRad);//?????
    time = 0;
    lifeTime = param.lifeTime;
    live = true;
}

void Particle::update(float dt){ //dt stands of timestamp?
    if(live){
        //rotate velocity
        vel.rotate(0, 0, param.rotate * dt);
        
        ofPoint acc;         //Acceleration
        ofPoint delta = pos - param.eCenter;
        
        float len = delta.length();
        if ( ofInRange( len, 0, param.eRad ) ) { // what does ofInRange do?
            delta.normalize();
            
            //Attraction/repulsion force
            acc += delta * param.force;
            
            //Spinning force
            acc.x += -delta.y * param.spinning;
            acc.y += delta.x * param.spinning;
        }
        
        vel += acc * dt;            //Euler method
        vel *= ( 1 - param.friction );  //Friction
        
                
        //update position
        pos += vel * dt; //euler method
        
        //update time + check if the particle is going to die based on lifeTime
        time += dt;
        
        if(time>=lifeTime){
            live = false;
        }
    }
}

void Particle::draw(){
    if(live){
//        float size = ofMap(time, 0, lifeTime, 3, 1);
        float size = ofMap(fabs(time - lifeTime/2), 0, lifeTime/2, 3, 1); //what is fabs?
        ofColor color = ofColor::red;
        
        float hue = ofMap(time, 0, lifeTime, 128, 255);
        color.setHue(hue);
        
//        float hex = ofMap(time, 0, lifeTime, 0, 128);
//        color.setHex(hex);
        
        ofSetColor(color);
        
        ofDrawCircle(pos, size);
        
    }

}











