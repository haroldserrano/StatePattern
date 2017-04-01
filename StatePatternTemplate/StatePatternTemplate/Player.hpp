//
//  Player.hpp
//  StatePatternTemplate
//
//  Created by Harold Serrano on 3/30/17.
//  Copyright © 2017 Harold Serrano. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>

class StateManager;
class StateInterface;

class Player {
    
    StateManager *stateManager;
    
public:
    
    Player(StateManager *uStateManager);
    
    ~Player();
    
    void update(double dt);
    
    void changeState(StateInterface *uState);
    
};
#endif /* Player_hpp */
