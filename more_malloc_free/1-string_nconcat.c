#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - concatenates two strings.
* @s1: frist givin string
* @s2: second givin string
* @n: number of second string characters taken
*
* Return: pointer to a string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr;
	unsigned int s1len;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	s1len = _strlen(s1);
	nstr = malloc(s1len + n * sizeof(char) + 1);
	for (i = 0;
	i < s1len; i++)
		nstr[i] = s1[i];
	if (s2 != NULL)
	{
		for (i = 0;
			i < n; i++)
			nstr[i + s1len] = s2[i];
	}
	nstr[s1len + n] = '\0';
	return (nstr);
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
