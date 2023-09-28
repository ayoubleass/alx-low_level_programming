#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: unsigned long integer to be printed in binary.
 */


void print_binary(unsigned long int n)
{
	int i;
	int allowed = 0;
	int len = sizeof(n) * 8;

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
	i = len;
	while (i >= 0)
	{
		unsigned long int mask = (1 << i);

		if (n & mask)
		{
			printf("1");
			allowed = 1;
		}
		else if (allowed)
		{
			printf("0");
		}
		i--;
	}
	if (!allowed)
		_putchar('0');
}
