#include "main.h"
/**
 *malloc_checked -  allocates memory using malloc.
 *@b: size to allocate
 *Return: pointer
 *
 */




void *malloc_checked(unsigned int b)
{
	void *allocatedSpace = malloc(b);

	if (allocatedSpace == NULL)
	{
		exit(98);
	}

	return (allocatedSpace);
}
