#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: unsigned long integer to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	int allowed = 0;
	int len = sizeof(n) * 8;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		len--;
		while (len)
		{
			unsigned long int one = 1UL;

			if (n & one << --len)
			{
				_putchar('1');
				allowed = allowed + 1;
			}
			else if (allowed)
				_putchar('0');
		}
	}
}
