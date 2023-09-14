#include "variadic_functions.h"
#include  <stdarg.h>
#include <stddef.h>
#include <stdio.h>




/**
 * print_numbers - Prints a variable number of integers separated by a given
 *                 separator string.
 *
 * @separator: The string used to separate the integers (can be NULL).
 * @n: The number of integers to be printed.
 * ...: The variable number of integer arguments to be printed.
 */




void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0 && i < n)
			printf("%s", separator);

		printf("%d", va_arg(args, int));
	}

	printf("\n");
}
