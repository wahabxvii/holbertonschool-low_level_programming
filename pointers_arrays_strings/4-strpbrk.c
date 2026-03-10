#include "main.h"
/**
* _strpbrk - 
* @s:
* @accept:
* Return: 
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

