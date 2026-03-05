#include "main.h"
/**
 * _strncat - concatenates two strings whith specific number of char
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: integer
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s = dest;
	int i;

	while (*s != '\0')
		s++;
	while (n--)
	{
	i = (*s++ = *src++);
		if (!i)
			return (dest);
	}
	*s = '\0';
	return (dest);
}
