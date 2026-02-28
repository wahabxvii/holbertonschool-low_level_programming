#include "main.h"
/**
 * _islower - chechs if the letter is lower case
 * Return: 1 if c lowercase and 0 otherwise
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
