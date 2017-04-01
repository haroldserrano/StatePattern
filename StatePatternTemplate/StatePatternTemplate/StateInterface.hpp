//
//  StateInterface.hpp
//  StatePatternTemplate
//
//  Created by Harold Serrano on 3/30/17.
//  Copyright © 2017 Harold Serrano. All rights reserved.
//

#ifndef StateInterface_hpp
#define StateInterface_hpp

#include <stdio.h>

class Player;

class StateInterface {
    
public:
    
    virtual ~StateInterface(){};
    
    virtual void enter(Player *uPlayer)=0;
    
    virtual void execute(Player *uPlayer, double dt)=0;
    
    virtual void exit(Player *uPlayer)=0;
    
};

#endif /* StateInterface_hpp */
