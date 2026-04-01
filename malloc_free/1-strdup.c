#include "main.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
* _strdup - cupys a string to a new location in memory
* @str: string
* Return: pointer to a string.
*/
char *_strdup(char *str)
{
	int len = _strlen(str) + 1;
	char *newstr = malloc(len * sizeof(char));

	if (str == 0)
		return (0);
	if (newstr == 0)
		return (0);
	_strcpy(newstr, str);
	return (newstr);
}
/**
 * _strlen - print the length of string
 * @s: variable pointer
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
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
