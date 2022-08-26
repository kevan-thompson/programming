"""
Filename:       module3_story.py
Author:         Kevan Thompson
Date:           August 8, 2022

Description: 

This is an example program from the pluralsight couse Python 3.6 Getting 
Started. It reads a story from text story from a website, converts it 
into a list of strings. 

"""

from urllib.request import urlopen

#Open URL
story = urlopen('http://sixty-north.com/c/t.txt')

#Create an empty list that the story will go into
story_words = []

for line in story :
    #for each line of the story convert it to a list of strings
    line_words = line.decode('utf8').split()
    for word in line_words :
        #for each string in the line append it to a list
        story_words.append(word)

#Close the URL        
story.close()

print(story_words)
