"""
A module that contains all functions to implement
a stack in python using linked list data type
"""

#define the structure of node of a linked list
class Node:
    data = None
    link = None

# a class that will initalize a stack and define all its operations
class LinkedList:
    """ Initialize the head of list"""
    def __init__(self):
        self.head = None

    
    """ function that will push data onto the stack"""
    def push(self, data):
        if self.head == None:
            self.head = Node()
            self.head.data = data

        else:
            newNode = Node()
            newNode.data = data
            newNode.link = self.head
            self.head = newNode
    
    """ Function that prints the entire stack"""
    def print_stack(self):
        temp = self.head
        if temp == None:
            print("Empty stack")
            return
        while(temp != None):
            print(temp.data, end = " ")
            temp = temp.link
        print()

    """Function that deletes top element of a stack"""
    def pop(self):
        #if stack is empty
        if self.head == None:
            print("stack underflow")
            return
        val = self.head.data
        self.head = self.head.link
        return val

    """Function to check if stack is empty"""
    def isEmpty(self):
        if self.head == None:
            return True
        else:
            return False

    """Function that returns the top of stack"""
    def peek(self):
        #if stack is empty
        if self.head.link == None:
            print("stack underflow")
            return
        val = self.head.data
        return val