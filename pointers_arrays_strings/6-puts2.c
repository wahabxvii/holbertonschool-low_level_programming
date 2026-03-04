#include "main.h"
/**
 * puts2 -
 * @str:
 * Return:
 */
void puts2(char *str)
{
	int i = str[0];

	while (i < str['\0'])
	{
		_putchar(str[i]);
		i += 2;
	}

}
