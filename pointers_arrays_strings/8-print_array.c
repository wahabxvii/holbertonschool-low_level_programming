#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: pointer to an array
 * @n: number of elements of the array
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
