#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: unsigned long integer to be printed in binary.
 */


void print_binary(unsigned long int n)
{
	int allowed = 0;
	int len = sizeof(n) * 8;
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	i = len - 1;
	while (len - 1)
	{
		unsigned long int mas = 1UL << i;

		if (n & mas)
		{
			_putchar('1');
			allowed = allowed + 1;
		}
		else if (allowed)
			_putchar('0');
		len--;
		i--;
	}
}
