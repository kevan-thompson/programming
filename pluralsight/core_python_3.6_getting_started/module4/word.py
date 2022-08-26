"""
Filename:       word.py
Author:         Kevan Thompson
Date:           August 25, 2022

Description: 

This is an example program from the pluralsight couse Python 3.6 Getting 
Started. It reads a story from text story from a website, converts it 
into a list of strings. 

"""

#IMPORTS
import sys
from urllib.request import urlopen

def fetch_words(url):
    """
    Description:    This function fetches a list of words from a URL
    Paramaters:     URL - the URL to fetch a list of words from
    Return:         A list of words
    """
    #Open URL
    story = urlopen(url)

    #Create an empty list that the story will go into
    story_words = []
    
    
    for line in story:
        #for each line of the story convert it to a list of strings
        line_words = line.decode('utf8').split()
        for word in line_words:
            #for each string in the line append it to a list
            story_words.append(word)

    #Close the URL        
    story.close()
    return story_words
    
    
def print_items(items):
    """
    Description:    Prints items from a sequence. (list, dict, string, etc)
    Paramaters:     items - a sequence of somethings
    Return:         None
    """
    for item in items:
        print(item)

        
def main(url):
    """
    Description:    Main program for testing. Takes a URL and prints 
                    a list of words from it. 
    Paramaters:     url -an optional paramater. URL to get a list of words from
    Return:         None
    """
    words = fetch_words(url)
    print_items(words)
    
if __name__ == '__main__':
    if len(sys.argv) > 1 :
        main(sys.argv[1])
    else:
        main('http://sixty-north.com/c/t.txt')
    
    


