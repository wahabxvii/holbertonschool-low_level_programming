#include "function_pointers.h"
#include <stdio.h>
/**
* int_index - searches for an integer.
* @array: pointer to an array of ints
* @size: size of the array
* @cmp: pointer to a function
*
* Return: index if found or -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0;
	  i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
