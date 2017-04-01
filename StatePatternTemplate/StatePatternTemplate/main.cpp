//
//  main.cpp
//  StatePatternTemplate
//
//  Created by Harold Serrano on 3/30/17.
//  Copyright © 2017 Harold Serrano. All rights reserved.
//

#include <iostream>
#include "Player.hpp"
#include "StateManager.hpp"
#include "RunningState.hpp"
#include "WalkingState.hpp"

int main(int argc, const char * argv[]) {
    
    //Create a State manager object
    StateManager *stateManager=new StateManager();
    
    //Create a player object
    Player *player=new Player(stateManager);
    
    //Change the state of the object to a RUNNING state
    player->changeState(RunningState::sharedInstance());
    
    //call the update method
    player->update(1.0);
    
    //Change the state of the object to a WALKING state
    player->changeState(WalkingState::sharedInstance());
    
    //call the update method
    player->update(1.0);
    
    return 0;
}
