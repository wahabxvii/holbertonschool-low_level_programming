 #include "main.h"
/**
* _atoi - convert a string to an integer
* @s: pointer to a string
* Return: int number
*/
#define INT_MAX_VAL ((~0U) >> 1)
#define INT_MIN_VAL (-(INT_MAX_VAL) - 1)

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
            if (num > (INT_MAX_VAL - digit) / 10)
            {
                while (*(++s) >= '0' && *s <= '9')
                    ;
                return (sign == 1) ? INT_MAX_VAL : INT_MIN_VAL;
            }

            num = num * 10 + digit;
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

    if (!digit_found)
        return 0;

    return sign * num;
}
