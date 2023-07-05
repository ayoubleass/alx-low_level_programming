#include "main.h"
/**
 * factorial -returns the factorial of a given number
 * @n : number that the fun will calculate teh factorial
 * Return: n factoriel
 */


int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
