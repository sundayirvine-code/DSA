#include "hash.h"

int main(void) {
    // Create a hash table with a size of 10
    hash_table *ht = create_hash_table(10);

    // Insert some key-value pairs
    insert(ht, "key1", "value1");
    insert(ht, "key2", "value2");
    insert(ht, "key3", "value3");

    // Look up the values for some keys
    printf("%s\n", get(ht, "key1")); // prints "value1"
    printf("%s\n", get(ht, "key2")); // prints "value2"
    printf("%s\n", get(ht, "key3")); // prints "value3"
    printf("%s\n", get(ht, "key4")); // prints "(null)"

    // Remove a key-value pair
    remove_key(ht, "key2");

    // Look up the values for some keys again
    printf("%s\n", get(ht, "key1")); // prints "value1"
    printf("%s\n", get(ht, "key2")); // prints "(null)"
    printf("%s\n", get(ht, "key3")); // prints "value3"
    printf("%s\n", get(ht, "key4")); // prints "(null)"

    // Destroy the hash table and free all allocated memory
    destroy_hash_table(ht);

    return 0;
}
