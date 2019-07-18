'''
    Title           :   Operations and variables
    Author          :   ALELG, MUSTAFA
    Date            :   22 June, 2018
    Description     :   Programming a simple calculater
'''

# PLAYIMG WITH VARIABLES
'''
# Defining a variale x
x = 10 # Create a variable x and store the value 10 into it.

print("x =", x)
x = x + 1
print(x)
x += 1
print(x)

from math import *
print(sin(0) + cos(0))
print(pi)

'''

# AREAS PROGRAM - FROM LAB1
from math import *

    print("This program calculates the 2D shapes area\n>")
while True:
    print("1. Rectangle area \n2. Trapzoid area \n3. Circle area\n> ")
    choose = int(input("Please select the shape you want to calculate its area\n>"))
    if choose == 1:
        height = float(input("Enter the height \n"))
        width = float(input("Enter the width \n"))
        a1 = height * width
        print(a1)
    elif choose == 2:
        base1 = float(input("Enter the first base \n> "))
        base2 = float(input("Enter the last base \n> "))
        height2 = float(input("Enter the height \n> "))
        a2 = (base1 + base2) * height2 * 1/2
        print(a2)
    else:
        radius = float(input("Enter the radius \n"))
        a3 = radius * radius * pi
        print(a3)

