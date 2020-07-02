'''
    Title           :   Graphic & Pygame
    Author          :   ALELG, MUSTAFA
    Date            :   4 Jul, 2018
    Description     :   Pygame introduction
'''

# Import the library
import pygame
pygame.init()
from math import *

# Defining colors
BLACK   = (   0,   0,   0)
WHITE   = ( 255, 255, 255)
RED     = ( 255,   0,   0)
GREEN   = (   0, 255,   0)
BLUE    = (   0,   0, 255)

size = (700, 500) # (width, height)
screen = pygame.display.set_mode(size) # Opening and setting the window size

pygame.display.set_caption("CHECK THIS COOL GAME") # Displaying window title
font = pygame.font.SysFont('Calibri', 25, True, False)
text = font.render("TEST", True, BLACK)
# Setting the main loop
done = False
clock = pygame.time.Clock()
while not done:
    for event in pygame.event.get(): 
        if event.type == pygame.QUIT:
            done = True
            
    # --- Game logic goes here
    # --- Drawing code goes here
    screen.fill(WHITE)
    ###########
    screen.blit(text, [250, 250])
    
    
    
    
    ###########
    pygame.display.flip()
    clock.tick(60)
pygame.quit
