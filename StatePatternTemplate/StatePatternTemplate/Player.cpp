//
//  Player.cpp
//  StatePatternTemplate
//
//  Created by Harold Serrano on 3/30/17.
//  Copyright © 2017 Harold Serrano. All rights reserved.
//

#include "Player.hpp"
#include "StateManager.hpp"

Player::Player(StateManager *uStateManager){
    
    stateManager=uStateManager;
    
}

Player::~Player(){
    
}

void Player::update(double dt){
    
    stateManager->update(dt);
}

void Player::changeState(StateInterface *uState){
    
    stateManager->changeState(uState);
    
}
