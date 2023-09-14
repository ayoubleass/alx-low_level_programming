#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_strings - Prints a variable number of strings followed by a new line.
 *
 * @separator: The string to be printed between the strings (can be NULL).
 * @n: The number of strings to be printed.
 * ...: The variable number of string arguments to be printed.
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;


	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL &&  i != 0 && i < n)
			printf("%s", separator);

		printf("%s", va_arg(args, char *));

	}
	printf("\n");
	va_end(args);
}
