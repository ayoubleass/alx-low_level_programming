#include <stdio.h>
/**
 * int_index - Searches for an integer in an array and returns its index.
 * @array: Pointer to the array of integers.
 * @size: The number of elements in the array.
 * @cmp: Pointer to the function used to compare elements.
 * Return: int
 */





int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int result;

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		else
		{
			result = -1;
		}
		i++;
	}
	return (result);
}
