#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: nothing
 */
void times_table(void)
{
int n;
for (n = 0;
n <= 9; i++)
{
_putchar('0' + (9 / 10));
_putchar('0' + (9 % 10));
_putchar(' ');
_putchar('x');
_putchar(' ');
_putchar('0' + (n / 10));
_putchar('0' + (n % 10));
_putchar(' ');
_putchar('=');
_putchar(' ');
int r = 9 * n;
if (r >= 10)
{
_putchar('0' + (r / 10));
_putchar('0' + (r % 10));
}
else
{
_putchar('0');
_putchar('0' + r);
}
_putchar('\n');
}
}
