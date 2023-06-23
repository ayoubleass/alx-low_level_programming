#include "main.h"

/**
 * print_line - Prints a line of dashes ('-') a specified number of times.
 * @n: The number of times to print the line.
 */


void print_line(int n)
{
	int dash;

	if (n > 0)
	{
		for (dash = 1 ; dash > n; dash++)
		{
		_putchar('_');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
