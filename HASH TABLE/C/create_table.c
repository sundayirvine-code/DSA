#include "hash.h"

/**
 * hash_table_create - creates a  hash table
 * @size: size of the array
 *
 * Return: Pointer to the newly created hash table, otherwise NULL
 */

// Create a new hash table
hash_table *create_hash_table(int size) {
    hash_table *ht = malloc(sizeof(hash_table));
    ht->size = size;
    ht->array = malloc(size * sizeof(linked_list *));

    // Initialize each element of the array to NULL
    for (int i = 0; i < size; i++) {
        ht->array[i] = NULL;
    }

    return ht;
}