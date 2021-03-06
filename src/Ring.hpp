//
//  Ring.hpp
//  AudioViz_FinalProject
//
//  Created by Uyen on 30/12/2017.
//

#ifndef Ring_hpp
#define Ring_hpp

#include <stdio.h>

#include "ofMain.h"
#include "ofxGui.h"

class Ring {
    
public:
    
    Ring();
    
    ofParameterGroup parameters;
    ofParameter<float> radius, spacing, intensity;
    ofParameter<float> R,G,B; //colours
    
    vector<float> points;
    float startColor;
    
    void setupGui();
    void draw(float fftMagnitudes);
    
};

#endif /* Ring_hpp */
