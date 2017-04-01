//
//  RunningState.hpp
//  StatePatternTemplate
//
//  Created by Harold Serrano on 3/30/17.
//  Copyright © 2017 Harold Serrano. All rights reserved.
//

#ifndef RunningState_hpp
#define RunningState_hpp

#include <stdio.h>
#include <iostream>
#include "StateInterface.hpp"

class Player;

class RunningState:public StateInterface {
    
private:
    
    RunningState();
    
    ~RunningState();
    
public:
    
    static RunningState* instance;
    
    static RunningState* sharedInstance();
    
    void enter(Player *uPlayer);
    
    void execute(Player *uPlayer, double dt);
    
    void exit(Player *uPlayer);
    
};
#endif /* RunningState_hpp */
