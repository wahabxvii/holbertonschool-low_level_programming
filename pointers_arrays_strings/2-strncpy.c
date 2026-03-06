#include "main.h"
/**
 * _strncpy - copies a specific number of char from a string
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: integer
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *src != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
