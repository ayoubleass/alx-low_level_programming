#include "main.h"

/**
 * flip_bits - Flips the bits in two unsigned long integers.
 * @n: First unsigned long integer.
 * @m: Second unsigned long integer.
 * Return: The unsigned long integer after flipping the bits.
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int  diffrence =  n ^ m;

	while (diffrence > 0)
	{
		if (diffrence & 1)
			count++;
		diffrence >>= 1;
	}
	return (count);
}
