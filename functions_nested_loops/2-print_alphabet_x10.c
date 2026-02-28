#include "main.h"
/**
 * print_alphabet_x10 - print alphabet charachters 10 times
 * Return: always 0
 */
void print_alphabet_x10(void)
{
int s;
int c;
for (s = 1;
s <= 10; s++)
{
for (c = 'a';
c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
