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
	if (size == 0 || nmemb == 0)
		return (NULL);

	void *result = malloc(nmemb * size);

	if (result == NULL)
		return (NULL);

	return (result);
}
