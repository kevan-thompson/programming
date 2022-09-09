"""
Filename:       object_refences_scope.py
Author:         Kevan Thompson
Date:           September 8, 2022

Description: Smaller funtions exploring objects, references and scope



"""

#IMPORTS
import sys
from urllib.request import urlopen

#Global variables
count = 0

def banner(message = "Default", border = "-"):
    """
    Description:    Prints a banner around the message
    Paramaters: massage - a message str to have a banner around it. 
                    default is "default"
                banner - string that will become the banner. default is '-'    
    Return:         None
    """
    line = border * len(message)
    print(line)
    print(message)
    print(line)

    
def add_spam(menue = []):
    """
    Description:    This function adds spam to a list
    Paramaters:     menue - a list to add 'spam' to. default is an empty list
                            Or atleast it is supposed to be. Try calling 
                            multiple times....
    Return:         menue, now with spam
    """
    menue.append("spam")
    return menue


def add_spam_better(menue = None): 
    """
    Description:    This function adds spam to a list
    Paramaters:     menue - a list to add 'spam' to. default is an empty list
                            This fixes the problem of add_spam
    Return:         menue, now with spam
    """
    if menue is None:
        menue = []
    
    menue.append('spam')
    return menue
 

def show_count(): 
    """
    Description:    Prints the global variable Count
    Paramaters:     None
    Return:         None
    """
    print(count)

def set_count(c): 
    """
    Description:    Sets the global variable Count to C
    Paramaters:     c an integer to be assigned to count
                    ...or atleast it's supposed to....
    Return:         None
    """
    count = c


def set_count_global(c): 
    """
    Description:    Sets the global variable Count to C
    Paramaters:     c an integer to be assigned to count
    Return:         None
    """
    global count
    count = c

    
def main():
    """
    Description:    Main program for testing. 
    Paramaters:     None 
    Return:         None
    """
    print("############################################################################")
    print("This main program is a test of a number of simple functions.")
    print("It's only for educational purposes. It's not super useful. Sorry")
    print("############################################################################")
    
    ############################################################################
    #Let's explore some default arguement values!
    ############################################################################
    
    #Use Defaults
    banner()
    #Only use second default
    banner("Only Second Default")
    #Don't use either default
    banner("No Defaults", "*")
    #Change argument order
    banner(border = ".", message = "We can change the argument order")
    
    
    ############################################################################
    #Let's explore some more default arguement values!
    ############################################################################
   
    #lists of food
    breakfast = ['bacon', 'eggs']
    lunch = ["baked beans"]
    
    #add spam to breakfast and lunch
    print(f"Add Spam to my breakfast of {breakfast}" )
    add_spam(breakfast)
    print(breakfast)
    print(f"Add Spam to my lunch of {lunch}" )
    add_spam(lunch)
    print(lunch)
    #Just call add spam
    #We want it to just print spam, but each call adds a spam
    #Why? Beause the default empty list is only created once...
    print("All I want is spam! So much spam. Maybe to much spam...")
    print(add_spam())
    print(add_spam())
    print(add_spam())
    print(add_spam())
    #Now try our better function!
    #it only adds spam once!
    print("This is the just right amount of spam!")
    print(add_spam_better())
    print(add_spam_better())
    print(add_spam_better())
    print(add_spam_better())
    
    
    ############################################################################
    #Let's play with global variables
    ############################################################################
    
    #print initial count value
    print("Initial value of count is: ")
    show_count()
    #Set count to 5
    print("Change count to 5! Count is now: ") 
    set_count(5)
    #print new count value.... but it didn't change?
    #Why? The function set_count creates a new variable count at it's scope
    show_count()
    print("Ummmmm.... that didn't work. Let's try again")
    #Let's try setting count to 5 again!
    set_count_global(5)
    show_count()
    print("It worked!")
    
if __name__ == '__main__':
    main()
    


