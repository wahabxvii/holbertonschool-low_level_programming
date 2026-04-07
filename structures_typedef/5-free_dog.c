#include "dog.h"
#include <stdlib.h>
/**
* free_dog - frees struct dog types.
* @d: pointer to struct dog type
*
* Return: nothing.
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
