#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - alculates the sum of a variable number of integers.
 * @n: number  of the args
 * @param n The number of integers to be summed.
 * @param ... The variadic arguments, a list of integers to be summed.
 *
 * Return: The sum of the provided integers, or 0 if n is 0.
 */






int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}


	va_end(args);
	return (sum);


}
