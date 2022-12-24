from stack import *

def main_func():
    stack = Stack()
    while True:
        print('Choices:')
        print('1. push')
        print('2. pop')
        print('3. print')
        print('4. peek')
        print('5. quit')
        
        try:
            choice = int(input('Enter Choice: '))
        except ValueError:
            print("Invalid choice")

        if choice == 1:
            while True:
                try:
                    data = int(input("Enter value: "))
                except ValueError:
                    print("Invalid choice")
                else:
                    stack.push(data)
                    break

        if choice == 2:
            stack.pop()

        if choice == 3:
            stack.print_stack()

        if choice == 4:
            print(stack.peek())
        if choice == 5:
            return
        if choice > 5 or choice < 1:
            print("invalid choice")

        

if __name__ == '__main__':
    main_func()