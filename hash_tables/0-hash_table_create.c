#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array
 *
 * Return: pointer to a hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned int i;

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(size * sizeof(hash_table_t *));
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0;
	  i < size; i++)
		new_table->array[i] = NULL;
	return (new_table);
}
