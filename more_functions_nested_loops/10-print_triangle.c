#include "main.h"
/**
 * print_triangle - print triangle
 * @size: variable
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; i++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
