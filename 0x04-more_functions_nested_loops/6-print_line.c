#include "main.h"

/**
 * print_line - Prints a line of dashes ('-') a specified number of times.
 * @n: The number of times to print the line.
 */


void print_line(int n)
{
	if (n > 0)
	{
		for (n ; n > 0 ; n--)
		{
		_putchar('_');
		}
		_ptchar('\n');
	}
	_putchar('\n');
}
