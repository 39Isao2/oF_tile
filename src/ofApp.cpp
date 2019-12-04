#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    // 諸々設定
    ofBackground(0, 0, 0);
    ofSetCircleResolution(64);
    
    
    // 一枚のタイルの幅
    float width = 20;
    
    // 間隔
    float kankaku = width/2;
    
    
    for(int i=0; i<NUM; i++ ){
        for(int j=0; j<NUM; j++){
            pos[i][j].set(i*width + kankaku, j*width + kankaku);
            circle[i][j] = new Circle(&pos[i][j]);
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0; i<NUM; i++){
        for(int j=0; j<NUM; j++){
            circle[i][j]->update();
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0; i<NUM; i++){
        for(int j=0; j<NUM; j++){
            circle[i][j]->draw();
        }
    }
}
