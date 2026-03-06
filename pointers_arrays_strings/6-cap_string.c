#include "main.h"
/**
 * cap_string -
 * @s: 
 * Return:
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
