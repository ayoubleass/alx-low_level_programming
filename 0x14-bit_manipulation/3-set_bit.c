#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to an unsigned long integer.
 * @index: Index of the bit to set (starting from 0).
 * Return: 1 if the bit was successfully set, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int size  = sizeof(n) * 8;

	if (index >= size)
		return (-1);
	unsigned long int bit = 1 << index;

	if (!(*n & bit))
		*n |= bit;
	return (1);
}
