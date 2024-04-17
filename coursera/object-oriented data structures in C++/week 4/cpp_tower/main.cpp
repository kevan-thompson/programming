/**********************************************************
Filename:   main.cpp
Author:     Kevan Thompson
Date:       April 15, 2024
Description:A test program to test the Hanoi tower game 
**********************************************************/

#include <iostream>
#include "Game.h"

using std::cout;
using std::endl;

int main(){

    Game g;
    
    cout << "Initial game state: " << endl;
    cout << g << endl;
    
    g.solve();
    
    cout << "Final game state: " << endl;
    cout << g << endl;
    
    
    return 0;
    
}
