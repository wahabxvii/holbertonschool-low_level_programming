#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: pointer
 * Return: pointer to a string
 */
char *leet(char *s)
{
	int i = 0;
	char from[] = "aAeEoOtTlL";
	char to[] = "4433007711";

	while (s[i])
	{
		int j = 0;

		while (from[j])
		{
			if (s[i] == from[j])
			{
				s[i] = to[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
