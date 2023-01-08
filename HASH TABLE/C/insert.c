#include "hash.h"

void insert(hash_table *ht, char *key, char *value) {
    int index = hash(key, ht->size);
    linked_list *node = ht->array[index];

    // Key already exists, update the value
    while (node != NULL) {
        if (strcmp(node->key, key) == 0) {
            node->value = value;
            return;
        }
        node = node->next;
    }

    // Key does not exist, insert new node
    node = malloc(sizeof(linked_list));
    node->key = key;
    node->value = value;
    node->next = ht->array[index];
    ht->array[index] = node;
}