#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to copy from src.
 *
 * Return: Pointer to the resulting string (dest).
 */





char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destLen  = 0;

	while (dest[destLen] != '\0')
		destLen++;

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[destLen + i] = src[i];
	}
	dest[destLen + i] = '\0';
	return (dest);
}
