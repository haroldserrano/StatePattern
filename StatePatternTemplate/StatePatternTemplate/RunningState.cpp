//
//  RunningState.cpp
//  StatePatternTemplate
//
//  Created by Harold Serrano on 3/30/17.
//  Copyright © 2017 Harold Serrano. All rights reserved.
//

#include "RunningState.hpp"
#include "Player.hpp"

RunningState *RunningState::instance=0;

RunningState::RunningState(){
    
}

RunningState::~RunningState(){
    
}

RunningState *RunningState::sharedInstance(){
    
    if (instance==0) {
        
        instance=new RunningState();
        
    }
    
    return instance;
}

void RunningState::enter(Player *uPlayer){
    
    std::cout<<"Player entering Running State"<<std::endl;
    
}

void RunningState::execute(Player *uPlayer, double dt){
    
    std::cout<<"Executing Running State"<<std::endl;
    
}

void RunningState::exit(Player *uPlayer){
    
    std::cout<<"Player exiting Running State"<<std::endl;
    
}
