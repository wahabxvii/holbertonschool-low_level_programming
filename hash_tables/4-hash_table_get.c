#include "hash_tables.h"
#include <string.h>
/**
* hash_table_get - retrieves a value associated with a key.
* @ht: the hash table to look up
* @key: the key of the node
*
* Return: the value or NULL if error.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = hash_djb2((const unsigned char *)key) % ht->size;
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
