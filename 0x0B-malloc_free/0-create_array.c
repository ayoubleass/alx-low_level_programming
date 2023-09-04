#include "main.h"


/**
 * create_array - reates an array of chars, and initializes it with a char.
 *@size: size of the allocated space
 *@c: the charc stoed in the array
 *Return: first element of the created array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
