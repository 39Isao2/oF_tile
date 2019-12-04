#pragma once

#include "Circle.hpp"
#include "ofMain.h"

class Circle{
public:

    Circle(ofVec2f* pPos);
    
    void update();
    void draw();
    
    // 座標
    ofVec2f pos;
    
    //直径
    float diameter;
    
    //スピード
    int speed;
    
    //三角関数用の角度
    int theta;
    
    // 半径
    int radius;
};
    
