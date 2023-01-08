#ifndef HASH_TABLE
#define HASH_TABLE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for hash table
typedef struct hash_table {
    int size;
    struct linked_list **array;
} hash_table;

// Structure for linked list nodes
typedef struct linked_list {
    char *key;
    char *value;
    struct linked_list *next;
} linked_list;

char *get(hash_table *ht, char *key);
hash_table *create_hash_table(int size);
void insert(hash_table *ht, char *key, char *value);
void remove_key(hash_table *ht, char *key);
void destroy_hash_table(hash_table *ht);
int hash(char *key, int size);

#endif