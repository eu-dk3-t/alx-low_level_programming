/**
 * File name:
 * 	0-hash_table_create.c
 * Description:
 * 	Creates a hash table
 * Author:
 * 	eu-dk3-t
 */

#include "hash_tables.h"

/**
 * Function name:
 * 	hash_table_create 
 * Description:
 * 	Creates a hash table.
 * NTK:
 * 	@size: The size of the array.
 * Return: NULL - Error
 *         Pointer to hash table 
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_t;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_t->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hash_t->array[i] = NULL;

	return (hash_t);
}
