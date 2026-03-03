#include "main.h"
/**
 * swap_int - swaps values of two varvables
 * @a: variable pointer
 * @b: variable pointer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
