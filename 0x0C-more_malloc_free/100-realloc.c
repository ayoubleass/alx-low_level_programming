#include <stdlib.h>
#include <string.h>
/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with malloc(old_size)
 * @old_size: Size of the allocated space for ptr, in bytes
 * @new_size: New size of the memory block, in bytes
 *
 * Return: Pointer to the reallocated memory block, or NULL on failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	void *new_ptr = malloc(new_size);
	if (new_ptr != NULL)
    	{
		unsigned int min_size = (old_size < new_size) ? old_size : new_size;
		memcpy(new_ptr, ptr, min_size);
		free(ptr);
    	}
	return (new_ptr);
}
