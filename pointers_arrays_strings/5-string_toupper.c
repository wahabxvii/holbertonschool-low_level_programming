#include "main.h"
/**
 * string_toupper - change characters of string to upper case
 * @s: pointer to a string
 * Return: a string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0;
		s[i] != '\0'; i++)
	{
		for (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
}
