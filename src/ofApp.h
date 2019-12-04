#pragma once

#include "ofMain.h"
#include "Circle.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    
    //配列の数
    static const int NUM = 100;
    
    //クラスの宣言
    Circle* circle[NUM][NUM];
    ofVec2f pos[NUM][NUM];


};
