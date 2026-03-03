#include "main.h"
/**
 * _strlen - print the length of string
 * @s: variable pointer
 * Return:
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		*s++;
	}
	return (i);
}
