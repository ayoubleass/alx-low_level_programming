#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates the first occurrence of the substring `needle`
 *           within the string `haystack`
 * @haystack: The string to search within
 * @needle: The substring to search for
 *
 * Return: Pointer to the first occurrence of `needle` within `haystack`,
 *         or NULL if `needle` is not found
 */




char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *matches = haystack;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			matches = &haystack[i];

			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					matches = haystack;
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (matches);
			}



		}


	}
	return (NULL);
}
