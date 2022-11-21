//
// Created by Erik Gabrielsen on 11/18/22.
//

#include "PerunaPop.h"
#include "PerunaBalloon.h"
#include "HornedFrogBalloon.h"
#include <iostream>
using namespace std;


PerunaPop::PerunaPop(){
    int a = rand() % 10;
    int b = rand() % 10;
    int c = rand() % 10;

    for(int x=0; x < 10; x++){
        if(x==a||x==b||x==c) {
            /*Balloon *balloons2;
            HornedFrogBalloon P2;
            balloons2 = &P2;
            balloons.push_back(balloons2);
             */
            balloons.push_back(new HornedFrogBalloon());
        }
        else{
            /*Balloon *balloons2;
            PerunaBalloon P2;
            balloons2 = &P2;
            balloons.push_back(balloons2);
             */
            balloons.push_back(new PerunaBalloon());
        }
    }

    //for(int x=0; x < 3; x++){
     //   int index = rand() % 10;
       // Balloon * balloons3;
        //HornedFrogBalloon P3;
        //balloons3 = &P3;
       // balloons.at(index) = balloons3;
    //}
}
void PerunaPop::Print(){
    for(int x=0; x < balloons.size(); x++){
        if(balloons.at(x)->isPopped()){
            cout << " *  ";
        }
        else{
            cout << " [" << x + 1 << "] ";
        }
    }
    cout << endl;
}
void PerunaPop::play(){
    for(int x=5; x > 0; x--){
        Print();
        cout << "You have " << x << " throws left" << endl;
        cout << "Pick balloon #: ";
        int selection;
        cin>> selection;
        while(balloons.at(selection-1)->isPopped()){
            cout << "Invalid" << endl;
            cout << "Pick balloon #: ";
            cin>> selection;
        }
        winnings += balloons.at(selection-1)->pop();
        cout << "You now have $" << winnings << endl << endl;
    }
    cout<< "Game Over";
}

PerunaPop::~PerunaPop(){
   // delete selection;
    for(int x=5; x > 0; x--){
        delete balloons.at(x);
    }

}