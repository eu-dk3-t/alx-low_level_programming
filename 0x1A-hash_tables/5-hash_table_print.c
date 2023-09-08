#include "hash_tables.h"

/**
 * Function name:
 * 	hash_table_print
 * Description:
 * 	Prints a hash table.
 * NTK:
 * 	@ht: Pointer to a hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cur;
	char num_c = 0;
	unsigned long int idx;

	if (ht != NULL)
	{
		printf("{");
		for (idx = 0; idx < ht->size; idx++)
		{
			cur = (ht->array)[idx];
			while (cur != NULL)
			{
				if (num_c == 1)
					printf(", ");
				printf("'%s': '%s'", cur->key, cur->value);
				cur = cur->next;
				num_c = 1;
			}
		}
		printf("}\n");
	}
}
