#include "main.h"

/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: unsigned long int
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8;
	unsigned long int bit;

	if (index >= size)
		return (-1);

	bit = 1 << index;

	if (*n & bit)
		*n ^=  bit;
	return (1);
}

