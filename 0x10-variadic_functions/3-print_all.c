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
	int comma;

	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				if (comma == 1)
					printf(", ");
				printf("%d", va_arg(args, int));
				comma = 1;
				break;
			case 'c':
				if (comma == 1)
					printf(",");
				printf("%c", va_arg(args, int));
				comma = 1;
				break;
			case 'f':
				if (comma == 1)
					printf(", ");
				printf("%f", va_arg(args, double));
				comma = 1;
				break;
			case 's':

				if (comma == 1)
					printf(", ");
				str = va_arg(args, char *);
				printf("%s", (str != NULL) ? str : "(nil)");
				comma = 1;
				break;

		}
		i++;
	}

	printf("\n");
	va_end(args);

}
