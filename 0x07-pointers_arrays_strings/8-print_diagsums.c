#include <stdio.h>
#include "main.h"
/**
*print_diagsums - Prints the sum of
*the primary and secondary diagonals of a square matrix.
*@a: Pointer to the first element of the matrix.
*@size: Size of the square matrix.
*/






void print_diagsums(int *a, int size)
{
	int primaryDiagonalSum = 0;
	int secondaryDiagonalSum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		primaryDiagonalSum += *(a + i * size + i);
		secondaryDiagonalSum += *(a + i * size + (size - 1 - i));
	}
	printf("%d, ", primaryDiagonalSum);
	printf("%d", secondaryDiagonalSum);
	printf("\n");
}

