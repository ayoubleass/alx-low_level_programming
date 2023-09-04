#include "main.h"



/**
 * strLength - return the size of a string .
 * @str: the first element of the passed string
 * @n: index
 * Return: the size of a string
 */

int strLength(char *str, int n)
{
	if (str != NULL)
	{
		if (str[n] == '\0')
		return (n);

	return (strLength(str, n + 1));
	}
return (n);
}

/**
 * str_concat - concatenates two input strings.
 * @s1: The first string to be concatenated.
 * @s2:  The second string to be concatenated.
 * Return: A newly allocated string containing the concatenated result,
 * or NULL if memory allocation fails.
 */


char *str_concat(char *s1, char *s2)
{
	char *arr;

	int size1 = strLength(s1, 0);
	int size2 = strLength(s2, 0);

	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	arr = malloc((size1 + size2 + 1) * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		arr[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
	arr[i + j] = s2[j];
	j++;
	}
	return (arr);
}
