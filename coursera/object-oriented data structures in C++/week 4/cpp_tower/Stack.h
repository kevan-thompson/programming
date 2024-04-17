/**********************************************************
Filename:   Stack.h
Author:     Kevan Thompson
Date:       April 15, 2024
Description: The Stack class represents a stack of Cubes in
             the hanoi tower game. Each Stack is a vectors
             of cubes, with functions to interact with the
             top of the stack.     
**********************************************************/

#pragma once

#include <vector>
#include "cube.h"
using uiuc::Cube;

class Stack{

    public:
        void push_back(const Cube & cube);
        Cube removeTop();
        Cube & peekTop();
        unsigned size() const;
        
        //an overload of the operator<< allowing us to 
        //print the stack via "cout <<"
        
        friend std::ostream & operator<< (std::ostream & os, const Stack & stack);
        
    private:
        std::vector<Cube> cubes_;
};

