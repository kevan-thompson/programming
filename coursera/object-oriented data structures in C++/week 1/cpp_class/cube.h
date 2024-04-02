/**********************************************************
Filename:   cube.h
Author:     Kevan Thompson
Date:       April 1, 2024
Description:Header file for a the cube class. This class
            provides some simple functions about a cube
            based on it's length.   
**********************************************************/

//This tells the compiler to only compile the file once
//Should be in each header file
#pragma once

//<Class keyword> <Class name> {
class Cube{
    //Public Members
    public:
        double getVolume();
        double getSurfaceArea();
        double getLength();
        void setLength(double length);
    //Private members
    private:
        //It is a convention that private members end with
        //an underscore
        double length_;
//Note the semicolon        
};//end Cube
