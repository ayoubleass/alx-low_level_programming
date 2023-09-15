#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array using a comparison function.
 *
 * @array: Pointer to the integer array to be searched.
 * @size: The number of elements in the array.
 * @cmp: Pointer to a function that compares an integer
 * and returns a non-zero value if it matches the desired condition.
 * Return: The index of the first matching element if found.
 * - -1 if no match is found or if 'size' is less than or equal to 0.
 */





int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return  (-1);

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
