#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - sums all parameters.
* @n: number of parameters
*
* Return: the sum.
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x = 0;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0;
	  i < n; i++)
		x += va_arg(ap, int);
	return (x);
}
