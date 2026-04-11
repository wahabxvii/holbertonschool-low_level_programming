#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - print numbers followed by a new line.
* @separator: string separates numbers
* @n: count of numbers
*
* Return: nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int x = 0;

	if (separator != NULL)
	{
		va_start(args, n);
		for (i = 0;
	   i < n; i++)
		{
			x = va_arg(args, int);
			printf("%d", x);
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	va_start(args, n);
	for (i = 0;
	i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
	}
	printf("\n");
}
