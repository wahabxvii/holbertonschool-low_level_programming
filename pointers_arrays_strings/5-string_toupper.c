#include "main.h"
/**
 * string_toupper - change characters of string to upper case
 * @s: pointer to a string
 * Return: a string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		for (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
