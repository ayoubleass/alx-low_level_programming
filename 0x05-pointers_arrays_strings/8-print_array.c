#include "main.h"
/**
 * print_array - Prints the elements of an integer array.
 * @a: Pointer to the integer array.
 * @n: Number of elements in the array.
 */






void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("\n");
}
