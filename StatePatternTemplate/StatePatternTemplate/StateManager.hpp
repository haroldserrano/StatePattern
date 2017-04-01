//
//  StateManager.hpp
//  StatePatternTemplate
//
//  Created by Harold Serrano on 3/30/17.
//  Copyright © 2017 Harold Serrano. All rights reserved.
//

#ifndef StateManager_hpp
#define StateManager_hpp

#include <stdio.h>
#include "StateInterface.hpp"

class Player;

class StateManager {
    
private:
    
    Player *player;
    
    StateInterface *previousState;
    
    StateInterface *currentState;
    
    StateInterface *nextState;
    
public:
    
    StateManager();
    
    ~StateManager();
    
    void changeState(StateInterface *uState);
    
    void update(double dt);
    
};

#endif /* StateManager_hpp */
