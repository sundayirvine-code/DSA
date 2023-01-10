from hash_table import *

def hash_main():
    #create hash table object
    ht = HashTable(size=10)

    # Add some key-value pairs to the hash table.
    ht.set('key1', 'value1')
    ht.set('key2', 'value2')
    ht.set('key3', 'value3')

    # Retrieve the values for the keys.
    print(ht.get('key1'))  # Outputs 'value1'
    print(ht.get('key2'))  # Outputs 'value2'
    print(ht.get('key3'))  # Outputs 'value3'

    # Delete a key-value pair from the hash table.
    ht.delete('key2')
    print(ht.get('key2'))  # Outputs None

hash_main()