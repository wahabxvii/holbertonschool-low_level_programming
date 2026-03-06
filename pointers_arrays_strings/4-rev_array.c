#include "main.h"
/**
 * reverse_array - reverse array
 * @a: pointer to an array
 * @n: intger
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n && a[i] != '\0')
		i++;
	while (a[i] >= 0)
	{
		_putchar(a[i]);
		i--;
	}
}
