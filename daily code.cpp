#1) Write a function named mult_table that takes a number n and prints it mulitiplication table from 1-10.
#For example, if you call mult_table(3), it would print out
#3x1=3, 3x2=6, 3x3=9, 3x4=12, 3x5=15, 3x6=18, 3x7=21, 3x8=24, 3x9=27, 3x10=30.

def mult_table(x):

    for i in range(11):
        print(i, "x", x,"=",i*x)
mult_table(2)




#2



#2) Write function battery_check, which takes a number from 0-100.
#If the number passed is 100, it prints out "battery full". If it is 50 or more,
#it prints "battery ok". Otherwise it prints "Battery Low, please charge!"


def battery_check(x):
    if x < 50:
        print ("low")
    
    elif x < 100:
        print ("battery pretty good")
    else:
        print("battery full")
battery_check(56)

#3




#3) Write a function that replaces all vowels (a, e, i, o, u) in a word with * and returns the new word.
#You can assume the word is lowercase.
#Hint: python lets you walk through all the characters in a word with a for loop, like "for i in word".

def switchVowel(word):
     for i in word:
         if i == "a" or i == "e" or i == "i"or i == "o" or i == "u":
             print("*")
         else:
             print(i)
switchVowel("Hello")



#4





  #4) Write a function that calculates the cost per square inch of a pizza given its diameter and price.


def cost_per_square_inch(diameter, price):
    radius = diameter / 2
    area = 3.14 * (radius ** 2)
    cost_per_inch = price / area
    return cost_per_inch

print(cost_per_square_inch(2, 2))


