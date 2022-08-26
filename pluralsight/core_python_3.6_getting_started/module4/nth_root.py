"""
Filename:       nth_root.py
Author:         Kevan Thompson
Date:           August 25, 2022

Description: 

This is an example program from the pluralsight couse Python 3.6 Getting 
Started. It computes the nth root of a radicand. 

"""

#IMPORTS
import sys

def nth_root(radicand, n):
    """
    Description:    Calculated the nth root of the radicand
    Paramaters:     radicand - the radicand (integer)
                    n - the nth root (integer)
    Return:         the nth root of the radicand (float)
    """
    return radicand ** (1/n)
  
  
def ordinal_suffix(value):
    """
    Description:    Calculates the ordinal suffix of a number. For example
                    for an input of 1 it returns st. (1st)
    Paramaters:     value - an integer to generate the suffix for
    Return:         the suffix as a string
    """
    
    s = str(value)
    
    if s.endswith('11'):
        return 'th'
    elif s.endswith('12'):
        return 'th'
    elif s.endswith('13'):
        return 'th'
    elif s.endswith('1'):
        return 'st'
    elif s.endswith('2'):
        return 'nd'
    elif s.endswith('3'):
        return 'rd'
    else: 
        return 'th'
    

def ordinal(value):
    """
    Description:    Returns the ordinal of a number. For example an inout of 
                    1 returns the string 1st
    Paramaters:     value - an integer to convert ro an ordinal
    Return:         the ordinal as a string
    """
    return str(value) + ordinal_suffix(value)

    
def display_nth_root(radicand, n):
    """
    Description:    Prints the nth root of a radicand
    Paramaters:     radicand - the radicand (integer)
                    n - the nth root (integer)
    Return:         None
    """
    root = nth_root(radicand, n)
    message = "The " + ordinal(n) + " root of " \
              + str(radicand) + " is " + str(root)
    print(message)
    
 
def main(radicand, n):
    """
    Description:    Main program for testing. Prints the nth root of a radicand
    Paramaters:     radicand - the radicand (string)
                    n - the nth root (string)
    Return:         None
    """
    display_nth_root(int(radicand), int(n))

    
if __name__ == '__main__':
    if len(sys.argv) > 2 :
        main(sys.argv[1], sys.argv[2])
    else:
        print("Incorrect number of paramaters!")
        print("Please enter 2 paramaters")
        print("The Radicand followed by")
        print("the Nth root")