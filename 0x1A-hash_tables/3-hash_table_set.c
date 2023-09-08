#include "hash_tables.h"

/**
 * Function name:
 * 	hash_table_set 
 * Description:
 * 	Adds an element to the hash table.
 * NTK:
 * 	@ht: Pointer to the hash table.
 * 	@key: The key inside the hash table.
 * 	@value: The corresponding value of the key.
 * Return: 
 * 	1 upon success, otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    char *value_copy = strdup(value);
    size_t idx = key_index((const unsigned char *) key, ht->size);
    char *key_copy = strdup(key);
    hash_node_t *cur = ht->array[idx];
    
    if (ht == NULL || key == NULL || value == NULL || key[0] == '\0' || value_copy == NULL)
	    return 0;

    while (cur != NULL) 
    {
        if (strcmp(cur->key, key) == 0) 
	{
            free(cur->value);
            cur->value = value_copy;
            return 1;
        }
        cur = cur->next;
    }

    if (key_copy == NULL) 
    {
        free(value_copy);
        return 0;
    }

    cur = malloc(sizeof(hash_node_t));
    
    if (cur == NULL) 
    {
        free(value_copy);
        free(key_copy);
        return 0;
    }

    cur->key = key_copy;
    cur->value = value_copy;
    cur->next = ht->array[idx];
    ht->array[idx] = cur;

    return 1;
}
