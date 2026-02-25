#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - starting point
 * print if result
 * Return: zero
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int last_digit = n % 10;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
}
if else(n == 0)
{
pritf("Last digit of %d is %d and is 0\n", n, last_digit);
}
if else(n < 6 && n != 0)
{
printf("Last digit of %d is %d and less than 6 and not 0\n", n, last_digit);
}
return (0);
}
