//
//  basicShape.hpp
//  outwardsSpiral
//
//  Created by  Christine on 4/12/16.
//
//

#ifndef basicShape_hpp
#define basicShape_hpp

#include <stdio.h>
#include "ofMain.h"


class basicShape{
public:
//    line();
    basicShape();
    
    void setup(float _posX, float _posY);
    void update();
    void draw();
    float gravity;
    float armLength;
    float angle;
    float aVel;
    float aAcc;
    
private:
    float posX, posY;
    float diam;
    
    
    
};


#endif /* basicShape_hpp */
