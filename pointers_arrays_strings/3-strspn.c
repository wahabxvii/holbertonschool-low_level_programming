#include "main.h"
/**
 * _strspn -  print length of a prefix substring
 * @s: pointer to substring
*  @accept: the matched chars
 * Return: number fo prefixes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (s[i] != '\0')
	{
		int found = 0;

		for (j = 0;
			accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		i++;
	}
	return (i);
}
