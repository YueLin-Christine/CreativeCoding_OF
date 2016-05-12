#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "Params.hpp"
#include "Particle.hpp"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    ofxPanel gui;

    
    vector<Particle> p;
    Particle newp;

    float bornCount;//Integrated number of particles to born
    float bornRate;//Particles born rate per second
    float time;
    float time0; //Time value for computing dt
    float dt;
    float size;
    
    ofFbo fbo; //Offscreen buffer for trails
    float history; //Control parameter for trails
    
//    ofxFloatSlider eRad;
//    ofxFloatSlider velRad;
//    ofxFloatSlider lifeTime;
//    ofxFloatSlider rotate;
//    
//    ofxFloatSlider force;
//    ofxFloatSlider spinning;
//    ofxFloatSlider friction;
    


};
