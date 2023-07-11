#include <stdlib.h>

int sizeOfString(char *str);
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: On success,
 * returns a pointer to the newly allocated concatenated string.
 *If memory allocation fails, returns NULL.
 */


char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2;
	char *arr;
	int i, j;

	size1 = sizeOfString(s1);
	size2 = sizeOfString(s2);

	arr = malloc((size1 + size2 + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (s1[i] != '\0')
	{
		arr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		arr[i] = s2[j];
		i++;
		j++;
	}
	arr[i] = '\0';
	return (arr);
}

/**
 * sizeOfString - Calculates the size of a string recursively.
 * @str: The string to calculate the size of.
 *
 * Return: The size of the string.
 */
int sizeOfString(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1  + sizeOfString(str + 1));
}
