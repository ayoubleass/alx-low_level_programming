#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_strings - Prints a variable number of strings followed by a new line.
 *
 * @separator: The string to be printed between the strings (can be NULL).
 * @n: The number of strings to be printed.
 * ...: The variable number of string arguments to be printed.
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
	char *str = va_arg(strings, char *);

	if (str != NULL)
		printf("%s", str);
	else
		printf("(nil)");

	if (i < n - 1 && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
