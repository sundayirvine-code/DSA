from list import *
from reverse import *

def main():
    original = LinkedList()
    original.push(1)
    original.push(2)
    original.push(3)

    print("original stack: ", end = "")
    original.print_stack()
    reverse(original)
    print("reversed stack: ", end = "")
    original.print_stack()

main()