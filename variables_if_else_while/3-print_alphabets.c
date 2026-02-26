#include <stdio.h>
/**
 * main - starting point
 * print aphabet lower and upper
 * Return: zero
 */
int main(void)
{
int a;
int l;
for (l = 97;
l <= 122;
l++)
{
putchar(l);
}
for (a = 65;
a <= 90;
a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
