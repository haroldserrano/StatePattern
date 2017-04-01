//
//  StateManager.cpp
//  StatePatternTemplate
//
//  Created by Harold Serrano on 3/30/17.
//  Copyright © 2017 Harold Serrano. All rights reserved.
//

#include "StateManager.hpp"

StateManager::StateManager():currentState(NULL),previousState(NULL),nextState(NULL){
    
}

StateManager::~StateManager(){
    
}

void StateManager::update(double dt){
    
    currentState->execute(player, dt);
    
}

void StateManager::changeState(StateInterface *uState){
    
    //keep a record of previous state
    previousState=currentState;
    
    //call the exit method of the existing state
    if (currentState!=NULL) {
        
        currentState->exit(player);
        
    }
    
    //change state to new state
    currentState=uState;
    
    //call the entry method of the new state
    currentState->enter(player);
    
}

