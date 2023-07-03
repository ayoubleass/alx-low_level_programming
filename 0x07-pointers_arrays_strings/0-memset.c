#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s
 *           with the constant byte b.
 * @s: Pointer to the memory area to be filled.
 * @b: Constant byte value used to fill the memory.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to the memory area s.
 */


char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
