#include <stdio.h>
/**
 * main - starting point
 * print reversed alphabet
 * Return: zero
 */
int main(void)
{
int c;
for (c = 122;
c >= 97; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
