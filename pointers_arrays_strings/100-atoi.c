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

	while (*s)
	{
		if ((*s == '+' || *s == '-') && !digit_found)
		{
			if (*s == '-')
				sign = -sign;
			s++;
		}
		else if (*s >= '0' && *s <= '9')
		{
			int digit = *s - '0';
			digit_found = 1;
			if (sign == 1)
			{
				if (num > (2147483647 - digit) / 10)
				{
					num = 2147483647;
					while (*(++s) >= '0' && *s <= '9')
						;
					return num;
				}
			}
			else
			{
				if (num > (-(2147483647 + digit)) / 10)
				{
					return 2147483647;
				}
			}
			num = num * 10 + digit;
			s++;
		}
		else if (digit_found)
		{
			break;
		}
		else
			s++;
	}
	if (!digit_found)
		return 0;
	if (num == 2147483647 && sign == -1)
		return 2147483647;
	return sign * num;
}
