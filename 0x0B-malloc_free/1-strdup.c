#include <stdlib.h>
/**
 * _strdup - Duplicates a given string.
 * @str: The string to be duplicated.
 *
 * Return: On success, returns a pointer to the duplicated string.
 *         If str is NULL or if memory allocation fails, returns NULL.
 */




char *_strdup(char *str)
{
	unsigned int length;
	char *duplicate;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	length = 1;
	while (str[length] != '\0')
	{
		length++;
	}
	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		duplicate[i] = str[i];
		i++;
	}
	return (duplicate);
}
