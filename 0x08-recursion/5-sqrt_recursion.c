#include "main.h"
/**
 * _find_theSquare - Helper function to recursively
 * find the square root of a number.
 * @start: The current value being tested for square root.
 * @n: The number for which to find the square root.
 *
 * Return: The square root of 'n' if found, or -1 if not found.
 */
int _find_theSquare(int start, int n);

/**
 * _sqrt_recursion - Finds the natural square root of a number using recursion.
 * @n: The number for which to find the square root.
 *
 * Return: The square root of 'n' if found,
 * or -1 if 'n' doesn't have a natural square root.
 */

int _sqrt_recursion(int n)
{
	return (_find_theSquare(0, n));
}

/**
 * _find_theSquare - Helper function to recursively
 * find the square root of a number.
 * @start: The current value being tested for square root.
 * @n: The number for which to find the square root.
 *
 * Return: The square root of 'n' if found, or -1 if not found.
 */

int _find_theSquare(int start, int n)
{
	if (start * start == n)
	{
		return (start);
	}

	if (start > n)
	{
		return (-1);
	}
	return (_find_theSquare(start + 1, n));
}
