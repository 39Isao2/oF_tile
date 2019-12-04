
//
//  Circle.cpp
//  dot_grid
//
//  Created by yonekura.akio on 2019/06/05.
//

#include "Circle.hpp"

//コンストラクタ
Circle::Circle(ofVec2f* pPos){
    pos.set(pPos->x, pPos->y);
    diameter = 30;
    theta = 0;
    speed = ofRandom(1,5);
    radius = 10;
}


void Circle::update(){
    
    // シータ
    if(theta > 360){
        theta = 0;
        
    } else {
        theta += speed;
    }
    
    // 半径をsinを使って伸縮
    diameter = abs(sin(ofDegToRad(theta)) * 0.5) * radius;
    
}
void Circle::draw(){
    ofSetColor(255, 255, 255);
    ofDrawCircle(pos.x, pos.y, diameter);
}
