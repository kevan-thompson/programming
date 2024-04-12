/**********************************************************
Filename:   cube.h
Author:     Kevan Thompson
Date:       April 10, 2024
Description:Header file for a the cube class. This class
            provides some simple functions about a cube
            based on it's length.   
**********************************************************/

#pragma once

namespace uiuc {
    //<Class keyword> <Class name> {
    class Cube{
        //Public Members
        public:
            Cube(); //custom default constructor
            Cube(double length); //one arguement constructor
            Cube(const Cube & obj); //custom copy constuctor 
            Cube & operator=(const Cube & obj); //custom assignment operator
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
}//end uiuc
