#include "hash_tables.h"

/**
 * Function name:
 * 	hash_table_get
 * Description:
 * 	Retrieves a value associated with a key.
 * NTK:
 * 	@ht: Pointer to the hash table.
 * 	@key: Pointer to a the key string.
 * Return: 
 * 	Hash_val
 * 	NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	char *value_copy = NULL;
	hash_node_t *cur;
	idx = key_index((const unsigned char *) key, ht->size);

	if (ht == NULL || key == NULL)
		return (NULL);


	cur = (ht->array)[idx];
	while (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0)
		{
			value_copy = strdup(cur->value);
			break;
		}
		cur = cur->next;
	}
	return (value_copy);
}
