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
	int s1_len;
	int s2_len;
	char *str;
	int size;
	int i;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	if (s1 == 0 || s2 == 0)
		return (0);
	size = s1_len + s2_len + 1;
	str = malloc(size * sizeof(char));
	for (i = 0;
	  i < s1_len; i++)
		str[i] = s2[i];
	for (i = 0;
	  i < s2_len; i++)
		str[s1_len + i] = s2[i];
	str[size - 1] = '\0';
	return (str);
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
