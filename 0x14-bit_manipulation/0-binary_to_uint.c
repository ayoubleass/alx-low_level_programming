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
	unsigned int result = 0;
	int len = _strlen(b);
	int i = len - 1;
	unsigned int cover = 1;

	if (!b)
		return (0);

	while (i >= 0)
	{
		if (b[i] == '1')
			result += cover;
		if (b[i] != '0' &&  b[i] != '1')
			return (0);
		cover *= 2;
		i--;
	}
	return (result);
}

