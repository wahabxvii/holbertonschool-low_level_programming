#include "hash_tables.h"
/**
* key_index - findes the index of a key.
* @key: the key that will be calculated
* @size: size of the hash table
*
* Return: the index.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	unsigned long int index = hash % size;

	return (index);
}
