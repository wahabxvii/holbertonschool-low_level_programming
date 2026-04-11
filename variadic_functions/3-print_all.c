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
	char *str;
	int i = 0;
	int flag;

	while (format)
	{
		va_start(args, format);
		while (format[i])
		{
			flag = 1;
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
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)"
					printf("%s", str);
					break;
				default:
					flag = 0;
					break;
			}
			if (format[i + 1] && flag)
				printf(", ");
			i++;
		}
		va_end(args);
		break;
	}
	printf("\n");
}
