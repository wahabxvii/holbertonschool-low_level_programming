#include <stdio.h>
/**
 * main - starting point
 * print hex base 16 numbers
 * Return: zero
 */
int main(void)
{
int h = 0;
while (h < 16)
{
if (h < 10)
putchar(h + '0');
else
putchar(h - 10 + 'a');
h++;
}
putchar('\n');
return (0);
}
