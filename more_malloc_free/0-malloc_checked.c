#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - allocates memory using malloc.
* @b: givin integer
*
* Return: a void pointer.
*/
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == 0)
		exit(98);
	return (i);
}
