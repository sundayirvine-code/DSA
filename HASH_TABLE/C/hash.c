#include "hash.h"

// Hash function to map keys to indices in the array
int hash(char *key, int size) {
    int sum = 0;
    for (int i = 0; key[i] != '\0'; i++) {
        sum += key[i];
    }
    return sum % size;
}