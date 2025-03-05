#Kenny and julian
#3/5/25
#13 minutes
#1) Write a function called sum_even that takes an integer parameter and returns the sum of all even numbers less than or equal to that number.


x=10
sum = 0
for i in range(2, x):
        if i % 2 == 0:
            print("This is even")
            sum +=i
        else:
            print("This is odd")
           
#---------------------------------------------------------------------------------

#Kenny and julian
#3/5/25
#5 minutes
#2) Write a function called calculate_bmi that takes weight in kilograms and height in meters, calculates the BMI using the formula BMI=weight/(height^2), and returns the BMI.

def calculate_bmi(weight, height):
    bmi = weight/(height*height)
    return bmi

print(calculate_bmi(20, 5))
#----------------------------------------------------------------------------------

#Kenny and julian
#3/5/25
#8 minutes
#3) Write a function called count_down_up that takes an integer n, counts down to 1, and then counts back up to n. The output for count or count_down_up(3) should be 3, 2, 1, 2, 3.

def count_down_up(n):
    for i in range(n, 0, -1):
        print(i, end =' ')
    
    for i in range(2, n + 1):
        print(i, end=' ')
        
count_down_up(3)

#---------------------------------------------------------------------------------

