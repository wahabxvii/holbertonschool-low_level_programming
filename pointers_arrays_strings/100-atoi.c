#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer to a string
 * Return: int number
 */
int myAtoi(const char* str)
{
	int sign = 1, base = 0, i = 0;

	while (str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		sign = 1 - 2 * (str[i++] == '-');
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (base > 2147483647 / 10
			|| (base == 2147483647 / 10
			&& str[i] - '0' > 7))
		{
			if (sign == 1)
				return 2147483647;
			else
				return 2147483647;
		}
		base = 10 * base + (str[i++] - '0');
	}
	return base * sign;
}
