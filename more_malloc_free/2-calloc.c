#include "main.h"
#include <stdlib.h>
/**
*
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *buffer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	buffer = malloc(nmemb * sizeof(size));
	if (buffer == NULL)
		return (NULL);
	for (i = 0;
	  i < nmemb; i++)
		buffer[i] = 0;
	return (buffer);
}
