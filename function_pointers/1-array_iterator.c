#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - excutes a func size times
* @array: pointer to array of ints
* @size: times of array exctution
* @action: pointer to a function
*
* Return: nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0;
		i < size; i++)
		action(array[i]);
}
