#include "dog.h"
#include <stdlib.h>
#include <string.h>
char *_strcpy(char *dest, char *src);
/**
* new_dog - creates a new dog info
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*
* Return: pointer to a struct.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = malloc(strlen(owner));
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);
	return (new_dog);
}
/**
 * _strcpy - copy a string
 * @dest: pointer
 * @src: pointer
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
