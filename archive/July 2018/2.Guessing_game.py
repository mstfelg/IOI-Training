'''
    Title           :   Random & guessing game
    Author          :   ALELG, MUSTAFA
    Date            :   22 June, 2018
    Description     :   First game: guessing game.
'''

# q is a random number between 0 and 1
# q = random.random() 
# print (q)
import random
my_number = random.randrange(1, 101)
print("I'll pick a number from 1 to 100 and you try to guess it!")
i = 0
guess = 101
while my_number != guess:
    i += 1
    print("--- Attempt ", i ,"---")
    guess = int(input("Enter your guess: "))
    if my_number > guess:
        print("Too Low!")
    elif my number < guess:
        print("Too high!")
if guess == my_number:
    print("correct!")