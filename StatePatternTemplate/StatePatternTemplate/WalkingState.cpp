//
//  WalkingState.cpp
//  StatePatternTemplate
//
//  Created by Harold Serrano on 3/30/17.
//  Copyright © 2017 Harold Serrano. All rights reserved.
//

#include "WalkingState.hpp"
#include "Player.hpp"

WalkingState* WalkingState::instance=0;

WalkingState::WalkingState(){
    
}

WalkingState::~WalkingState(){
    
}

WalkingState *WalkingState::sharedInstance(){
    
    if (instance==0) {
        
        instance=new WalkingState();
        
    }
    
    return instance;
    
}

void WalkingState::enter(Player *uPlayer){
    
    std::cout<<"Player entering Walking State"<<std::endl;
    
}

void WalkingState::execute(Player *uPlayer, double dt){
    
    std::cout<<"Executing Walking State"<<std::endl;
    
}

void WalkingState::exit(Player *uPlayer){
    
    std::cout<<"Player exiting Walking State"<<std::endl;
    
}
