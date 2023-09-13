#include "function_pointers.h"
/**
 * array_iterator - Executes a given action on each element of the  array.
 * @array: Pointer to the integer array to be iterated over.
 * @size: Size of the array.
 * @action: Pointer to a function that takes an integer
 * as a parameter and performs an action on it.
 */






void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
