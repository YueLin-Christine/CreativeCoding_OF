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
class Model{
public:
    int posX, posY;
    int r,g,b,a;
//    ofColor c;
    float w;
    float h;


    Model();
    
    void setup();
    void update();
    void draw();
    void drawBranch(float x, float y, float w, float h, int r, int g, int b, int a);
    
};