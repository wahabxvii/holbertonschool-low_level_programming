#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocates memory for an array, using malloc.
* @nmemb: number of elements
* @size: bytes size of nmemb
*
* Return: pointer to array.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *buffer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	buffer = malloc(nmemb * size);
	if (buffer == NULL)
		return (NULL);
	for (i = 0;
	  i < nmemb; i++)
		buffer[i] = 0;
	return (buffer);
}
