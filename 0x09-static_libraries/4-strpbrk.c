#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Locates the first occurrence of any character in `accept`
 *             within the string `s`
 * @s: The string to search within
 * @accept: The characters to search for
 *
 * Return: Pointer to the first occurrence of a matching character in `s`,
 *         or NULL if no match is found
 */



char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);

}
