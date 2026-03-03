#include "main.h"
/**
 * _strlen - print the length of string
 * @s: variable pointer
 * Return:
 */
int _strlen(int *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		_putchar('\n');
	}
	return (0);
}
