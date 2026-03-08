#include "main.h"
/**
* _memcpy - copies memory area
* @dest: pointer destination string
* @src: pointer source string
* @n: number of copied chars
* Return: pointer to a string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0;
	  i < n; i++)
		dest[i] = src[i];
	return (dest);
}
