#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: pointer to a string
 * Return: noting
 */
void puts2(char *str)
{
	int i = str[0];

	while (i < str['\0'])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\0');

}
