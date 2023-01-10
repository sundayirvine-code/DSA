class Node:
    '''Defines the node of a linked list
    '''
    def __init__(self, key, value):
        self.key = key
        self.value = value
        self.next = None

class HashTable:
    def __init__(self, size=10):
        '''Set the size of the hash table and 
        initialize the nodes to be None.'''
        self.size = size
        self.nodes = [None] * self.size
        
    def _hash_function(self, key):
        '''Use the built-in hash() function to 
        compute the hash of the key.
        Mod the hash value by the size of the 
        hash table to get the index.'''
        return hash(key) % self.size
    
    def set(self, key, value):
        # compute index
        index = self._hash_function(key)
        
        # If there is no node at the index, create 
        # a new node with the key-value pair.
        if self.nodes[index] is None:
            self.nodes[index] = Node(key, value)
            return
        
        # If there is a node at the index, find 
        # the node with the matching key.
        current_node = self.nodes[index]
        while current_node is not None:
            if current_node.key == key:
                # If the key already exists, 
                # update the value and return.
                current_node.value = value
                return
            current_node = current_node.next
        
        # If the key does not exist, add a new node 
        # to the end of the linked list with the key-value pair.
        current_node.next = Node(key, value)
    
    def get(self, key):
        # Compute index
        index = self._hash_function(key)
        
        # If there is no node at the index, return None.
        if self.nodes[index] is None:
            return None
        
        # If there is a node at the index, find the node with the matching key.
        current_node = self.nodes[index]
        while current_node is not None:
            if current_node.key == key:
                # If the key is found, return the value.
                return current_node.value
            current_node = current_node.next
        
        # If the key is not found, return None.
        return None
    
    def delete(self, key):
        # Compute the index
        index = self._hash_function(key)

        # If there is no node at the index, do nothing.
        if self.nodes[index] is None:
            return

        # If there is a node at the index, find the node with the matching key.
        current_node = self.nodes[index]
        previous_node = None
        while current_node is not None:
            if current_node.key == key:
                # If the key is found, delete the node from the linked list.
                if previous_node is None:
                    self.nodes[index] = current_node.next
                else:
                    previous_node.next = current_node.next
                return
            previous_node = current_node
            current_node = current_node.next

