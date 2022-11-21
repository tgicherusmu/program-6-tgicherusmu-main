//
// Created by Erik Gabrielsen on 11/18/22.
//

#ifndef STACK_PERUNAPOP_H
#define STACK_PERUNAPOP_H
#include "vector"
#include "Balloon.h"
using namespace std;


class PerunaPop{
private:
    vector<Balloon *> balloons;
    int winnings;
public:
    PerunaPop();
    void Print();
    void play();
    ~PerunaPop();

};


#endif //STACK_PERUNAPOP_H
