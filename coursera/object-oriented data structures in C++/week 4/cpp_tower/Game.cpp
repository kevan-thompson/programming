/**********************************************************
Filename:   Game.cpp
Author:     Kevan Thompson
Date:       April 24, 2024
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
Descrption: This function solves the hanoi towers game.
            This solution works on the pattern for a 4 
            cube, 3 stack puzzel the cubes will always 
            move in the following way:
                Between stacks 0, and 1
                Between stacks 0, and 2
                Between stacks 1, and 2
                Repeat
            With only the direction changing. So this 
            solution loops over that pattern, doing what
            ever is the current legal move.  
Paramters:  None
Returns:    None
**********************************************************/
void Game::solve() {
  
  while(stacks_[2].size() != 4){
    _legalMove(0,1);
    _legalMove(0,2);
    _legalMove(1,2);
  }
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

/**********************************************************
Descrption: This function will move a cube between a stack
            at index1, and a stack at index2 in whatever 
            is a legal way to move.
            
            Ex: It will only move a cube on top of a larger
            cube, or onto an empty stack.
Paramters:  index1 and index2, unsigned values representing
            a stack index.   
Returns:    None
**********************************************************/
void Game::_legalMove(unsigned index1, unsigned index2){

    //Check if the stack at index1 is empty, and index2 is not empty
    if(stacks_[index1].size() == 0 && stacks_[index2].size() > 0) {
        //Move a cube from index2 to index1
        _move(index2, index1);
    //Check if the stack at index2 is empty, and index1 is not empty    
    } else if(stacks_[index1].size() > 0 && stacks_[index2].size() == 0) {
        //Move a cube from index1 to index2 
        _move(index1, index2);
    //Check that both stacks are not empty
    }else if(stacks_[index1].size() > 0 && stacks_[index2].size() > 0) {
        //Check if the cube on top of stack[index1] is smaller than the cube on stack[index2] 
        if(stacks_[index1].peekTop().getLength() < stacks_[index2].peekTop().getLength()){
            //Move a cube from index1 to index2
            _move(index1, index2);
        } else {
            //Move a cube from index2 to index1
            _move(index2, index1);
        }
    }
    
    //Print the current status of the game
    cout << *this << endl;
}

/**********************************************************
Descrption: This function will move a cube between a stack
            at index1, to a stack at index2.
Paramters:  index1 and index2, unsigned values representing
            a stack index.   
Returns:    None
**********************************************************/
void Game::_move(unsigned index1, unsigned index2){

    Cube cube = stacks_[index1].removeTop();
    stacks_[index2].push_back(cube);
}

