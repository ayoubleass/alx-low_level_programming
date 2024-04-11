#include "search_algos.h"
#include <stdio.h>
/**
 * printArray - Prints the elements of an array within the specified range.
 *
 * @arr: Pointer to the first element of the array.
 * @l: Lower bound of the range to print.
 * @h: Upper bound of the range to print.
 */

void printArray(int *arr, size_t l, size_t h)
{
	size_t second = l + 1;

	printf("Searching in array:");
	while (l <= h)
	{
		if (l >= second)
			printf(", ");
		printf("%d", arr[l]);
		l++;

	}
	printf("\n");
}



/**
 * binary_search - Searches for a value in a sorted array of
 * integers using the binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return:
 * If value is found in array, returns the index where it is located.
 * If value is not present in array or if array is NULL, returns -1
 */
int binary_search(int *array, size_t size, int value)
{

	size_t l = 0, h = size - 1;
	int mid = 0;

	if (array == NULL)
		return (-1);

	while (l <= h)
	{
		mid = l + (h - l) / 2;
		printArray(array, l, h);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			l = mid + 1;
		else
			h = mid - 1;
	}
	return (-1);
}
