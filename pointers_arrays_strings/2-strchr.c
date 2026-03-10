#include "main.h"
/**
* _strchr - print a string starting from c
* @s: pointer to a string
* @c: char start the output with
* Return: pointer to a string
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
