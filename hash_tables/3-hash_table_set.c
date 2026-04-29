#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
* hash_table_set - adds an element to the hash table.
* @ht: the hash table
* @key: key of the node
* @value: value of the node
*
* Return: 1 if success
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current;
	hash_node_t *new_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node->key);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->value);
		free(new_node);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(new_node->key);
			free(new_node->value);
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
			{
				free(new_node);
				return (0);
			}
			free(new_node);
			return (1);
		}
		current = current->next;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
