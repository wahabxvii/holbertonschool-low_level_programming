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
	char *s = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
