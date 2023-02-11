#include "hash.h"

void destroy_hash_table(hash_table *ht) {
    for (int i = 0; i < ht->size; i++) {
        linked_list *node = ht->array[i];
        while (node != NULL) {
            linked_list *temp = node;
            node = node->next;
            free(temp->key);
            free(temp->value);
            free(temp);
        }
    }
    free(ht->array);
    free(ht);
}