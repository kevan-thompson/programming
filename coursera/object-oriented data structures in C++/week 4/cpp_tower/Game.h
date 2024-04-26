/**********************************************************
Filename:   Game.h
Author:     Kevan Thompson
Date:       April 15, 2024
Description:The Game class is a game of hanoi towers. The 
            Game consists of a vector of 3 stacks, 
            representing the stacks of cubes in the game.
            The constructor will initialize the first stack
            with 4 cubes. 
            
            The rules of the hanoi tower game are:
            
            1) To transfer the cubes from the first to the 
                last stack.
            2) You can only move the top cube from any 
                stack
            3) A larger cube can never be placed on a 
                smaller cube
                
**********************************************************/

#pragma once

#include <vector>
#include "Stack.h"

class Game{
    public:
        //Default constructor
        Game();
        //Solved the hanoi towers
        void solve();
        //Allows the game class to be printed using "cout <<"
        friend std::ostream & operator<< (std::ostream & os, const Game & game);
        
    private:
        
        void _legalMove(unsigned index1, unsigned index2);
        void _move(unsigned index1, unsigned index2);
        std::vector<Stack> stacks_;
};
