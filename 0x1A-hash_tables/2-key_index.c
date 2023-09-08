/**
 * File name:
 * 	2-key_index.c
 * Description:
 * 	Gets the index of given key for hashtable
 * Author:
 * 	eu-dk3-t
 */
#include "hash_tables.h"
/**
 * Function name:
 * 	key_index 
 * Description:
 * 	Gets the index of given key for hashtable
 * NTK:
 * 	@key: str containing key
 * 	@size: size of the hash table's array
 * Return:
 * 	Index of key in hash_table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key;

	hash_key = hash_djb2((unsigned char *)key);
	return (hash_key % size);
}
