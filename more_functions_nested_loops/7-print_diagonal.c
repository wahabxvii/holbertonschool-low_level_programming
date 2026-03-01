#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: variable
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(' ');
			_putchar('\\');
		}
	else
	{
	_putchar('\n');
	}
	}
}
