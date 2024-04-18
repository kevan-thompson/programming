/**********************************************************
Filename:   Stack.h
Author:     Kevan Thompson
Date:       April 17, 2024
Description: The Stack class represents a stack of Cubes in
             the hanoi tower game. Each Stack is a vectors
             of cubes, with functions to interact with the
             top of the stack.     
**********************************************************/

#include <vector>
#include <exception>
#include "Stack.h"
#include "cube.h"
using uiuc::Cube;
using std::cout;
using std::endl;

/**********************************************************
Descrption: Puts a cube on the stack. Will not put a larger
            cube on a smaller cube
Paramters:  cube, the cube to be placed. Of type Cube
Returns:    None
**********************************************************/
void Stack::push_back(const Cube & cube){

    // We need to make sure that we do not put a cube on top of a smaller cube
    if ( (size() > 0) && (cube.getLength() > peekTop().getLength()) ) {
        std::cerr << "A smaller cube cannot be placed on top of a larger cube." << std::endl;
        std::cerr << "  Tried to add Cube(length=" << cube.getLength() << ")" << std::endl;
        std::cerr << "  Current stack: " << *this << std::endl;

        throw std::runtime_error("A smaller cube cannot be put on top of a larger cube.");
    }

    cubes_.push_back(cube);
}

/**********************************************************
Descrption: Removed a cube from the stack and returns it
Paramters:  None
Returns:    The cube that was removed. Type Cube
**********************************************************/
Cube Stack::removeTop(){
    Cube cube;
    cube = cubes_.back();
    cubes_.pop_back();
    return cube;
}

/**********************************************************
Descrption: Looks at the top cube on the stack
Paramters:  None
Returns:    A reference to the top cube on the stack
**********************************************************/    
Cube & Stack::peekTop(){
    return cubes_.back();
    //or return cubes_[cubes_.size() - 1];
}

/**********************************************************
Descrption: Gets the size of the stack
Paramters:  None
Returns:    The size of the stack, as an unsigned int
**********************************************************/

unsigned Stack::size() const{
    return cubes_.size();
}

/**********************************************************
Descrption: Allows the stack to be printed using "cout <<"
Paramters:  
Returns:    
**********************************************************/
std::ostream& operator<<(std::ostream & os, const Stack & stack) {
  for (unsigned i = 0; i < stack.size(); i++) {
    os << stack.cubes_[i].getLength() << " ";
  }
  os << endl;
  return os;
}

