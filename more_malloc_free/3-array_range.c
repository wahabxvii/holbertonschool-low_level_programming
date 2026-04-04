#include "main.h"
#include <stdlib.h>
/**
*
*/
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = min;
	i <= max; i++)
		arr[i] = i;
	return (arr);
}
