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

    Game g1;
    Game g2;
    
    cout << "**********************************************" << endl;
    cout << "Solution 1!" << endl;
    cout << "**********************************************" << endl;
    cout << "Initial game state: " << endl;
    cout << g1 << endl;
    
    g1.solve();
    
    cout << "Final game state: " << endl;
    cout << g1 << endl;

    cout << "**********************************************" << endl;
    cout << "Solution 2!" << endl;
    cout << "**********************************************" << endl;
    cout << "Initial game state: " << endl;
    cout << g2 << endl;
    
    g2.solve2();
    
    cout << "Final game state: " << endl;
    cout << g2 << endl;    
    
    return 0;
    
}
