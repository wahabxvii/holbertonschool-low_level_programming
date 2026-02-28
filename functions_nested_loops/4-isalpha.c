#include "main.h"
/**
 * _isalpha.c - checks for alphabet character
 * @c: charcter in ASCII
 * Return: 1 if c lowercase and 0 otherwise
 */
int _isalpha(int c)
{
if (c >= 65 && <= 90) || (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
