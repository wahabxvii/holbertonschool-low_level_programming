#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer to a string
 * Return: int number
 */
int _atoi(char *s)
{
	short parity = 0;
	int num = 0;

	while ((*s >= 9 && *s <= 13) || *s == 32)
		++s;
	while (*s == '+' || *s == '-')
	{
		if (*s == '-')
			parity++;
		++s;
	}
	while (*s >= 48 && *s <= 57)
	{
		num *= 10;
		num += *s - 48;
		++s;
	}
	if (!(parity % 2))
		return (num);
	return (-num);
}
