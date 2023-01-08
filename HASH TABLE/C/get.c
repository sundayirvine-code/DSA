#include "hash.h"

char *get(hash_table *ht, char *key) {
    int index = hash(key, ht->size);
    linked_list *node = ht->array[index];

    while (node != NULL) {
        if (strcmp(node->key, key) == 0) {
            return node->value;
        }
        node = node->next;
    }

    // Key not found
    return NULL;
}