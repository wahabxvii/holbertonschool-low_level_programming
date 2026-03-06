#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to a string
 * Return: a string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] + 32;
		else
			continue;
		i++;
	}
	return (s);
}
