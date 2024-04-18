/**********************************************************
Filename:   Game.cpp
Author:     Kevan Thompson
Date:       April 17, 2024
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
#include <vector>
#include <iostream>
#include "Game.h"
#include "Stack.h"
#include "cube.h"
#include "HSLAPixel.h"

using std::cout;
using std::endl;

/**********************************************************
Descrption: The default constructor for the game class. It
            will create the stacks, and put four cubes on
            the first stack. These cubes will be  4/blue
            3/orange, 2/purple, and 1/yellow.
Paramters:  None
Returns:    None
**********************************************************/
Game::Game(){
    //Create the three empty stacks
    for(int i = 0; i < 3; i++){
        Stack stackOfCubes;
        stacks_.push_back(stackOfCubes);
    }
    
    //Create the four cubes, placeing each on the first 
    //(0th) stack
    
    Cube blue(4,uiuc::HSLAPixel::BLUE);
    stacks_[0].push_back(blue); 

    Cube orange(3,uiuc::HSLAPixel::ORANGE);
    stacks_[0].push_back(orange);
    
    Cube purple(2,uiuc::HSLAPixel::PURPLE);
    stacks_[0].push_back(purple);
    
    Cube yellow(1,uiuc::HSLAPixel::YELLOW);
    stacks_[0].push_back(yellow);
}//end constructor

/**********************************************************
Descrption: This function solves the hanoi towers game, 
            currently it is a TODO, and will only print
            the game 
Paramters:  None
Returns:    None
**********************************************************/
void Game::solve() {
  // Prints out the game:
  cout << *this << endl;

  //TODO Solving the game!
}

/**********************************************************
Descrption: Allows the Game class to be printed using 
            "cout <<"
Paramters:  
Returns:    
**********************************************************/
std::ostream& operator<<(std::ostream & os, const Game & game) {
  for (unsigned i = 0; i < game.stacks_.size(); i++) {
    os << "Stack[" << i << "]: " << game.stacks_[i];
  }
  return os;
}

