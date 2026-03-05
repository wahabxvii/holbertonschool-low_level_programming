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
    int digit = 0;

    while (*s != '\0')
    {
        if ((*s == '+' || *s == '-') && !digit)
        {
            if (*s == '-')
                sign *= -1;
            s++;
        }
        else if (*s >= 48 && *s <= 57)
        {
            digit = 1;
            num *= 10;
            num += *s - 48;
            s++;
        }
        else if (digit)
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
