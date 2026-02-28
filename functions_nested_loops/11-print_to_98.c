#include "main.h"

/**
 * times_table - prints all natural numbers from n to 98
 * Return: nothing
 */
void times_table(void)
{
    int r, c, p;

    for (r = 0; r <= 9; r++)
    {
        for (c = 0; c <= 9; c++)
        {
            p = r * c;

            if (c != 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            if (p < 10)
            {
                _putchar(' ');
            }
            else
            {
                _putchar((p / 10) + '0');
            }

            _putchar((p % 10) + '0');
        }
        _putchar('\n');
    }
}

