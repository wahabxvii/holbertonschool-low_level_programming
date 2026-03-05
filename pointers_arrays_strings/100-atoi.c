#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer to a string
 * Return: int number
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int digit_found = 0;

	while (*s != '\0')
	{
		if ((*s == '+' || *s == '-') && !digit_found)
		{
			if (*s == '-')
				sign *= -1;
			s++;
		}
		else if (*s >= 48 && *s <= 57)
		{
			digit_found = 1;
			int digit = *s - 48
				if (num > 214748364 || (num == 214748364 && digit > 7))
					break;
			num *= 10;
			num += digit;
			s++;
		}
		else if (digit_found)
		{
			break;
		}
		else
		{
			s++;
		}
	}
	return (num * sign);
}
