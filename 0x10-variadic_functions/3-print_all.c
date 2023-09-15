#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on the given format.
 *
 * @format: The format string indicating the types of arguments.
 * ...: The variable number of arguments to be printed.
 */



void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char *str;
	int comma = 0;

	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == 'i')
		{
			printf("%s", (comma == 1) ? ", " : "");
			printf("%d", va_arg(args, int));
			comma = 1;
		}
		else if (format[i] == 'c')
		{
			printf("%s", (comma == 1) ? ", " : "");
			printf("%c", va_arg(args, int));
			comma = 1;
		}
		else if (format[i] == 'f')
		{
			printf("%s", (comma == 1) ? ", " : "");
			printf("%f", va_arg(args, double));
			comma = 1;
		}
		else if (format[i] == 's')
		{
			printf("%s", (comma == 1) ? ", " : "");
			str = va_arg(args, char *);
			printf("%s", (str != NULL) ? str : "(nil)");
			comma = 1;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
