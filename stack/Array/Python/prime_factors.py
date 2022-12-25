from stack import *

""" A progtam that prints all the 
prime factors of a numer in decending order
using a stack"""

def prime_fact(number):
    stack = Stack()

    # start with lowers prime factor
    i = 2
    while number != 1:
        #Push all prime factors onto stack
        while number % i == 0:
            stack.push(i)
            number = number // i
        
        i += 1

    # Pop all stack values and print
    while stack.isEmpty() != True:
        print(stack.pop(), end = " ")

def main_func():
    #Get a number from the user
    while True:
        try:
            number = int(input("Enter a positive number: "))
        except ValueError:
            print("Please enter a number positive Number")
        else:
            if number < 0:
                print("Please enter a number positive Number")
            else:
                prime_fact(number)
                return


if __name__ == "__main__":
    main_func()