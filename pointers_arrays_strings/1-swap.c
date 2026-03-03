#include "main.h"
/**
 * swap_int - swaps values of two varvables
 * @a: variable pointer
 * @b: variable pointer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
