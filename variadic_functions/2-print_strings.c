#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *x = 0;

	if (separator != NULL)
	{
		va_start(args, n);
		for (i = 0;
	   i < n; i++)
		{
			x = va_arg(args, char*);
			if (x == 0)
				printf("nil");
			printf("%s", x);
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	else
	{
		va_start(args, n);
		for (i = 0;
		i < n; i++)
		{
			x = va_arg(args, char*);
			printf("%s", x);
		}
	}
	printf("\n");
	
}
