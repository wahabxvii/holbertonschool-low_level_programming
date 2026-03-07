#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to a string
 * Return: pointer to a string
 */
char *cap_string(char *s)
{
	int i , j;
	const char sep[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] = s[i] - ('a' - 'A');
			}
			else
			{
				j = 0;
				while (sep[j] != '\0')
				{
					if (s[i - 1] == sep[j])
					{
						s[i] = s[i] - ('a' - 'A');
						break;
					}
					j++;
				}
			}
		}
		i++;
	}
	return (s);
}
