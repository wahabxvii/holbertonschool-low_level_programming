#include "main.h"
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: givin number
* @i: int
* Return: integer
*/
int helper(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper(n, 0));
}
/**
 * helper - find the square root of a number
 * @n: givin number
 * @i: number being tested
 * Return: the square number
 */
int helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (helper(n, i + 1));
}
