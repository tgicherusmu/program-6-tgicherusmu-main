//
// Created by Erik Gabrielsen on 11/18/22.
//

#include "PerunaBalloon.h"
#include <iostream>
using namespace std;

PerunaBalloon::PerunaBalloon(){
    balloonAmount = 10;
    popped = false;
}

int PerunaBalloon::pop(){
    popped=true;
    cout << "Popped a Peruna - you gained $10" << endl;
    return balloonAmount;
}