#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search within.
 * @accept: The set of characters forming the prefix.
 *
 * Return: The number of bytes in the initial segment of s consisting only of
 *         bytes from accept.
 */



unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i;
	int found;

	while (*s != '\0')
	{
		found = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
			found = 1;
			break;
			}
		}
		if (found == 0)
		{
			return (length);
		}

		length = length + 1;
		s++;
	}

	return (length);
}
