#include "main.h"
/**
* is_prime_number - returns 1 if prime otherwise return 0
* @n: givin number
* @i: int
* Return: integer
*/
int helper(int n, int i);
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (helper(n, 2));
}
/**
* helper - fides if prime or not
* @n: givin number
* @i: tested number
* Return: integer
*/
int helper(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (helper(n, i + 1));
}
