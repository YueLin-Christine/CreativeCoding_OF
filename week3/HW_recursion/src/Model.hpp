//
//  Model.hpp
//  HW_recursion
//
//  Created by  Christine on 2/23/16.
//
//

#ifndef Model_hpp
#define Model_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Model_hpp */
class Model {
public:
    
    int posX, posY;
    int posPX, posPY;
//    int velX, velY;
    int r,g,b;
    float diam1;
    float diam2;
    
    int length;

    Model();
    
    void setup(float x, float y);
    void update();
    void draw();
    void drawBranch(float x, float y, float diam1, float diam2, int r, int g, int b);
    
};