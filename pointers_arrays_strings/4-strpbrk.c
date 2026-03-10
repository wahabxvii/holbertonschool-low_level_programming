#include "main.h"
/**
* _strpbrk - searches a string for any of a set of bytes
* @s: pointer to a string
* @accept: accepted list of chars
* Return: pointer to rest of string
*/
char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
				return (s);
			temp++;
		}
		s++;
	}
	return (0);
}

