#include "main.h"
#include <string.h>

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: stirng to convert
  * Return: unsigned int in base 10
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = strlen(b);
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
