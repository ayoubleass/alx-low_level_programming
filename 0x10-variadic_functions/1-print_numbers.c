#include <stdarg.h>
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
	va_list nums;
	unsigned int i;
	unsigned int lastElement = n - 1;

	va_start(nums, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i < lastElement &&  separator != NULL)
			printf("%s ", separator);
	}
	printf("\n");

	va_end(nums);
}
