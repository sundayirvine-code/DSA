from list import *

""" Function that reverses a stack using two temporary stacks"""

def reverse(original):
    #initialize two temp stacks
    stack1 = LinkedList()
    stack2 = LinkedList()

    #pop original while pushing to stack1
    while(original.head != None):
        val = original.pop()
        stack1.push(val)

    #pop stack1 while pushing to stack2
    while(stack1.head != None):
        val = stack1.pop()
        stack2.push(val)

    #pop stack2 while pushing to original
    while(stack2.head != None):
        val = stack2.pop()
        original.push(val)