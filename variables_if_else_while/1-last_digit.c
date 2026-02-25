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
int lasdig = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (lasdig > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lasdig);
}
else if(lasdig == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lasdig);
}
else if(lasdig < 6 && lasdig != 0)
{
printf("Last digit of %d is %d and less than 6 and not 0\n", n, lasdig);
}
return (0);
}
