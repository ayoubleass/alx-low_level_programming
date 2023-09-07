#include "main.h"
/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: Number of array elements.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated and zero-initialized memory,
 * or NULL on failure.
 */





void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;
	char *byte_ptr;
	unsigned int total_size, i;


	if (size == 0 || nmemb == 0)
		return (NULL);
	result = malloc(nmemb * size);

	if (result == NULL)
		return (NULL);

	total_size = nmemb * size;
	byte_ptr = (char *)result;

	for (i = 0; i < total_size; i++)
	{
		byte_ptr[i] = 0;
	}

	return (result);
}
