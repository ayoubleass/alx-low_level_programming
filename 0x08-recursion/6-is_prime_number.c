#include "main.h"

/**
 * is_divisible - Checks if a number is divisible by any integer
 * from a given divisor.
 * @n: The number to be checked for divisibility.
 * @divisor: The divisor to start checking from.
 *
 * Return: 1 if 'n' is divisible by any integer from 'divisor', 0 otherwise.
 */

int is_divisible(int n, int divisor)
{
	if (divisor * divisor > n)
		return (0);

	if (n % divisor == 0)
		return (1);

	return (is_divisible(n, divisor + 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to be checked.
 *
 * Return: 1 if 'n' is a prime number, 0 otherwise.
 */


int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);

	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	return (!is_divisible(n, 5));
}
