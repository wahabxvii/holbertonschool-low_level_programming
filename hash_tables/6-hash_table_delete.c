#include "hash_tables.h"
#include <stdlib.h>
/**
* hash_table_delete - delets a hash table.
* @ht: the hash table
*
* Return: nothing.
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned int i;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	free(head->array);
	free(head);
}
