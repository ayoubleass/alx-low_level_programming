#include "main.h"
/**
 * get_bit - Retrieves the value of a specific bit in an unsigned long integer.
 * @n: The unsigned long integer.
 * @index: The index of the bit to retrieve
 * (0 being the least significant bit).
 *
 * Return: The value of the bit at the given index (0 or 1) or -1 if the index
 *         is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	while (i < 32)
	{
		unsigned long int mask = (1 << i);

		if (i == index)
		{
			if (n & mask)
				return (1);
			if (!(n & mask))
				return (0);
		}
			i++;
	}
	return (-1);
}
