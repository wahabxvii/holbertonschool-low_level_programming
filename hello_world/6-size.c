#include <stdio.h>
/**
 * main - starting point
 * print the size of types
 * Return: 0
 */
int main(void)
{
char let = 'C';
int num = 9;
int lnum = 19;
int llnum = 119;
float flot = 1.9;
printf("Size of a char: %zu\n", sizeof(let));
printf("Size of an int: %zu\n", sizeof(num));
printf("Size of a long int: %zu\n", sizeof(lnum));
printf("Size of a long long int: %zu\n", sizeof(llnum));
printf("Size of a float: %zu\n", sizeof(flot));
return (0);
}
