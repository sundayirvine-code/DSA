class Stack:
    """Initialize empty stack"""
    def __init__(self):
        self.stack_arr = []

    """Push function implementation"""
    def push(self, data):
        self.stack_arr.append(data)

    """pop function implementation"""
    def pop(self):
        if self.isEmpty() == True:
            print("stack underflow")
            return
        return self.stack_arr.pop()

    def peek(self):
        if self.isEmpty() == True:
            print("stack underflow")
            return
        return self.stack_arr[-1]

    def print_stack(self):
        if self.isEmpty() == True:
            print("stack underflow")
            return
        for i in self.stack_arr:
            print(i, end = " ")
        print()
    
    def isEmpty(self):
        if len(self.stack_arr) == 0:
            return True
        else:
            return False