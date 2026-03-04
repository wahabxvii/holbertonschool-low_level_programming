#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to a string
 * Return: nothing
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	int med;
	int cha;
	char temp;

	while (s[i] != '\0')
	{
		len++;
	}
	med = len / 2;
	for (cha = 0; cha < med; cha++)
	{
		temp = s[cha];
		s[cha] = s[len - cha - 1];
		s[len - cha -1] = temp;
	}
}
