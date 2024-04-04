/**********************************************************
Filename:   cube.cpp
Author:     Kevan Thompson
Date:       April 1, 2024
Description:Header file for a the cube class. This class
            provides some simple functions about a cube
            based on it's length.   
**********************************************************/

#include "cube.h"

namespace uiuc {

    /**********************************************************
    Descrption: Calculates the volume of the cube
    Paramters:  None
    Returns:    The volume of the cube as a double
    **********************************************************/
    double Cube::getVolume(){
        return length_ * length_ * length_;
    }

    /**********************************************************
    Descrption: Calculates the surface area of the cube
    Paramters:  None
    Returns:    The surface area of the cube as double
    **********************************************************/
    double Cube::getSurfaceArea(){
        return 6 * (length_ * length_);
    }

    /**********************************************************
    Descrption: Getter function to get the length of the cube
    Paramters:  None
    Returns:    The length of the cube as a double
    **********************************************************/
    double Cube::getLength(){
        return length_;
    }

    /**********************************************************
    Descrption: Setter function to set the length of the cube
    Paramters:  The new length of the cube as a double
    Returns:    none
    **********************************************************/
    void Cube::setLength(double length){
        length_ = length;
    }
}//end uiuc
