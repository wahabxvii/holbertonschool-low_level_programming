#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: charcter in ASCII
 * Return: 1 if upper or 0 if not
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

