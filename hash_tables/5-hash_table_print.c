#include "hash_tables.h"
#include <stdlib.h>
/**
* hash_table_print - prints a hash table.
* @ht: the hash table
*
* Return: nothing if failed.
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int i;
	unsigned char comma;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma != 1)
				printf(",");
			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}
