#include <stdio.h>
/**
 * main - starting point
 * print numbers from 0 to 9 using putchar
 * Return: zero
 */
int main(void)
{
int n = 0;
while (n < 10)
{
putchar(n + '0');
n++;
}
putchar('\n');
return (0);
}
