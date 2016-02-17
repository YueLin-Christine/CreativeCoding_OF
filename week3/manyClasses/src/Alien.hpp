//
//  Alien.hpp
//  manyClasses
//
//  Created by  Christine on 2/10/16.
//
//

#ifndef Alien_hpp
#define Alien_hpp

#include <stdio.h>

#endif /* Alien_hpp */
#include "ofMain.h"

class Alien {
public:
    //properties
    int xPos, yPos;
    int velX, velY;
    int r, g, b;
    int diam;
    
    //constructor
    //just declare a contructor, so you can path value later
    Alien();
    
    //method
    void setup(float _x, float _y);
    void update();
    void draw();
};
