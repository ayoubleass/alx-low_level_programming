#include <stdio.h>
/**
 * array_iterator - Iterates over an array and applies a
 * function to each element.
 * @array: Pointer to the array of integers.
 * @size: The number of elements in the array.
 * @action: Pointer to the function to be applied on
 * each element of the array.
 */



void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
	printf("\n");
}
