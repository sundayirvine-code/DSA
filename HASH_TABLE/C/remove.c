#include "hash.h"

void remove_key(hash_table *ht, char *key) {
    int index = hash(key, ht->size);
    linked_list *node = ht->array[index];
    linked_list *prev = NULL;

    while (node != NULL) {
        if (strcmp(node->key, key) == 0) {
            if (prev == NULL) {
                ht->array[index] = node->next;
            } else {
                prev->next = node->next;
            }
            free(node->key);
            free(node->value);
            free(node);
            return;
        }
        prev = node;
        node = node->next;
    }
}