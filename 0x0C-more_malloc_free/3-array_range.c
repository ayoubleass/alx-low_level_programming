#include "main.h"
/**
 *array_range - reates an array of integers.
 *@min: int
 *@max: int
 *Return:  pointer to the newly created array
 *
 *
 */



int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
	{
		arr[i] = min + i;
	}
	return  (arr);
}

