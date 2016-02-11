//
//  Meow.hpp
//  hw_classes
//
//  Created by  Christine on 2/8/16.
//
//

#ifndef Meow_hpp
#define Meow_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Meow_hpp */

class Meow{
public:
    Meow();
    //properties
    string name;
    int age;
    float posX;
    float posY;
    
    
    //methods:functions
    void setup();
    void eye();
    void mouth();
    
    void talk();
    void blink();
    void fart();
    void body(); //what's the difference between body(ofPoint center) and body(),how do we know when to add it?

};
