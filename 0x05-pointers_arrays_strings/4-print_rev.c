#include "main.h"
#include <string.h>
/**
 * print_rev - Reverses and prints a string followed by a new line.
 * @s: Pointer to a null-terminated string to be reversed and printed.
 */


void print_rev(char *s)
{
	int i = strlen(s) - 1;

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
