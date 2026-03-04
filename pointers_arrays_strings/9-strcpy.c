#include "main.h"
/**
 * _strcpy - copy a string
 * @dest: pointer
 * @src: pointer
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
