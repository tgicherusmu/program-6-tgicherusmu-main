//
// Created by Erik Gabrielsen on 11/18/22.
//

#include "HornedFrogBalloon.h"
#include <iostream>
using namespace std;


HornedFrogBalloon::HornedFrogBalloon(){
    balloonAmount = 20;
    popped = false;

}
int HornedFrogBalloon::pop(){
    popped=true;
    cout << "Popped a Horned Frog - you lost $20" << endl;
    return 0-balloonAmount;

}