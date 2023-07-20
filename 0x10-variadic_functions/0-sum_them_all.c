#ifndef SUM
#define SUM
#include <stdarg.h>
#include <stdlib.h>
/**
 * Calculates the sum of a variable number of integers.
 *
 * @param n The number of integers to be summed.
 * @param ... The variadic arguments, a list of integers to be summed.
 *
 * @return The sum of the provided integers, or 0 if n is 0.
 */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list numbers;

	if (n == 0)
		return (0);


	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
#endif
