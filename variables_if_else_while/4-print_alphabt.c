#include <stdio.h>
/**
 * main - starting point
 * print alphabet but q and e
 * Return: zero
 */
int main(void)
{
int c;
for (c = 'a';
c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
putchar(c);
}
putchar('\n');
return (0);
}
