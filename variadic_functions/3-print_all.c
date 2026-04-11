#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all - print anything.
* @format: format specifier
*
* Return: nothing.
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (i > 0)
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
			{
				char *str = va_arg(args, char *);

				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
			}
			break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
