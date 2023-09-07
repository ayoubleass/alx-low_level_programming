#include "main.h"

/**
 * strLength - return the size of a string .
 * @s: the first element of the passed string
 * @n: index
 * Return: the size of a string
 */

unsigned int strLength(char *s,  unsigned int n)
{
	if (s[n] == '\0')
	{
		return (n);
	}
	return (strLength(s, n + 1));
}

/**
 * string_nconcat - Concatenates two strings up to n characters.
 * @s1: The first input string.
 * @s2: The second input string.
 * @n: The maximum number of characters from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string,
 * or NULL on failure.
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i, j;
	unsigned int s1Length = strLength(s1, 0);
	unsigned int s2Length = strLength(s2, 0);
	unsigned int size = s1Length + n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n > s2Length || n == s2Length)
		size = s1Length + s2Length;

	result = malloc(size + 1);

	if (result == NULL)
		return (NULL);


	i = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}

	j = 0;
	while (j < n && s2[j] != '\0')
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}
