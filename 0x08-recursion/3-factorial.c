#include "main.h"



/**
 * factorial - Calculates the factorial of a given number.
 * @n: The input integer for which factorial is calculated.
 *
 * Return: The factorial of 'n', or -1 if 'n' is negative.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));

}
