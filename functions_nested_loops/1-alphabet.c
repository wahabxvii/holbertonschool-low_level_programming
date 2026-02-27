#include "main.h"
/**
 * main - check the code
 * print alphabet lower case
 * without useing standered librarys
 * Return: Always 0.
 */
int print_alphabet(void);
{
int c;
for (c = 'a';
c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
return (0);
}
