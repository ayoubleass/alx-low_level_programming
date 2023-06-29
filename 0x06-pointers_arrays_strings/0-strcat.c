#include "main.h"
#include <string.h>
/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the concatenated string (dest).
 */

char *_strcat(char *dest, char *src)
{
	int  i;
	int destLength  = 0;

	while (dest != '\0')
		destLength++;

	for (i = 0; src[i] != "\0" ; i++)
	{
		dest[destLength + i] = src[i];
	}
	dest[destLength + i] = '\0';

	return (dest);
}
