#include "main.h"




/**
 * strLength - return the size of a string .
 * @str: the first element of the passed string
 * @n: index
 * Return: the size of a string
 */

int strLength(char *str, int n)
{
	if (str[n] == '\0')
		return (n);

	return (strLength(str, n + 1));
}

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *@str: pointer to a first elements of an aary of chars
 *Return: a copy of the string given as a paramete.
 *
 *
 */



char *_strdup(char *str)
{
	char *arr;
	int n = 0;
	int size = strLength(str, 0);


	if (str == NULL)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	while (n < size)
	{
		arr[n] = str[n];
		n++;
	}
	arr[n] = '\0';
	return (arr);
}
