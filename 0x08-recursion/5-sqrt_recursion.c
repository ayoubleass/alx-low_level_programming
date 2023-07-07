#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The natural square root of the number,
 * or -1 if it doesn't have a natural square root
 */
int sqrt_recursive(int n, int start, int end);






int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursive(n, 0, n));
}

/**
 * sqrt_recursive - Helper function to perform binary
 * search for the square root.
 * @n: The number to calculate the square root of.
 * @start: The starting point of the search range.
 * @end: The ending point of the search range.
 *
 * Return: The natural square root of n, or -1 if it does not have one.
 */
int sqrt_recursive(int n, int start, int end)
{
	int mid, result;

	if (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == n)
			return (mid);

		if (mid * mid < n)
		{
			result = sqrt_recursive(n, mid + 1, end);
		if (result == -1)
			return (mid);
		else
			return (result);
	}
		return (sqrt_recursive(n, start, mid - 1));
	}
	return (-1);
}
