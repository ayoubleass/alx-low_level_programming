#include <stdlib.h>

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
	void *p;

	if (size == 0)
		return (NULL);
	if (nmemb == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	return (p);

}
