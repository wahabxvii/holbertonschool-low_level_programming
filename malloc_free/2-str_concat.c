#include "main.h"
#include <stdlib.h>
int _strlen(char *s);
/**
* str_concat - concatenates two strings.
* @s1: string
* @s2: string
* Return: pointer to a string.
*/
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	char *result;
	int i;

	if (s1 != NULL)
		len1 = _strlen(s1);
	if (s2 != NULL)
		len2 = _strlen(s2);
	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0;
		i < len1; i++)
		result[i] = s1[i];
	for (i = 0;
		i < len2; i++)
		result[len1 + i] = s2[i];
	result[len1 + len2] = '\0';
	return (result);
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
