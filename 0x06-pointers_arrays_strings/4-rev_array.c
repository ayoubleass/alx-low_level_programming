#include "main.h"
/*
** Reverses the elements in an integer array.
**
** a: Pointer to the integer array
** n: Number of elements in the array
*/









void reverse_array(int *a, int n)
{
	int i;
	int ref[n];

	for (i = 0; i < length ; i++)
	{
		ref[i] = a[n - 1 - i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = ref[i];
	}
}
