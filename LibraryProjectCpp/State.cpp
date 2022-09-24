//
//  State.cpp
//  LibraryProjectCpp
//
//  Created by Dimitris Delis on 23/9/22.
//

#include <stdio.h>

struct State {
    
    enum states {home, list};
    states currentState = home;
    void setState(states st) {
        currentState = st;
    }
};
