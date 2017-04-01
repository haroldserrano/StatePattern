//
//  WalkingState.hpp
//  StatePatternTemplate
//
//  Created by Harold Serrano on 3/30/17.
//  Copyright © 2017 Harold Serrano. All rights reserved.
//

#ifndef WalkingState_hpp
#define WalkingState_hpp

#include <stdio.h>
#include <iostream>
#include "StateInterface.hpp"

class Player;

class WalkingState:public StateInterface {
    
private:
    
    WalkingState();
    
    ~WalkingState();
    
public:
    
    static WalkingState* instance;
    
    static WalkingState* sharedInstance();
    
    void enter(Player *uPlayer);
    
    void execute(Player *uPlayer, double dt);
    
    void exit(Player *uPlayer);
    
};

#endif /* WalkingState_hpp */
