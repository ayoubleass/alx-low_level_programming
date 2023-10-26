#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 * @str: A pointer to a constant character string.
 *
 * Return: The length of the string.
 */

int _strlen(const char *str)
{
	if (*str != '\0')
		return (1 + _strlen(str + 1));
	return (0);
}
/**
 * binary_to_uint - Convert a binary string to an unsigned integer.
 * @b: A pointer to a constant character string representing a binary number.
 *
 * Return: The decimal value of the binary string, or 0 if an error occurs.
 */

unsigned int binary_to_uint(const char *b)
{
	int i = _strlen(b) - 1, initial = i;
	unsigned int base = 1;
	unsigned int power,j = 0;
	unsigned int decimalValue = 0;

	if (b == NULL)
		return (0);
	while (i >= 0)
	{
		if (i == initial)
		{
			power = 0;
		}
		else
			power += 1;
		if (b[i] == '1')
		{
			while (j < power)
			{
				base *= 2;
				j++;
			}
			decimalValue += base;
		}

		if (b[i] != '1' && b[i] != '0')
			return  (0);
		i--;
	}
	return (decimalValue);
}
