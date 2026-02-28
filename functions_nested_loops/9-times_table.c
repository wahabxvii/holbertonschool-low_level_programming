#include "main.h"
/**
 * times_table - prints the 9 times table
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
if (p < 10)
{
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(' ');
}
}
if (p >= 10)
{
_putchar((p /10) + '0');
_putchar((p % 10) + '0');
}
_putchar('\n');
}
}
}
