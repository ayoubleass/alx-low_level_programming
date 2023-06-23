#include "main.h"
/**
 *print_diagonal - Prints a diagonal line of backslashes
 *@n:  number of iteration
 *
 */









void print_diagonal(int n)
{
	int space, i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (space = 0 ; space <= i ; space++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
