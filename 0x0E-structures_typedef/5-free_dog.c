#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog structure.
 * @d: Pointer to the dog structure to be freed.
 *
 * Description:
 * This function releases the memory allocated for a dog structure,
 * including the memory allocated for the name and owner strings.
 * If the pointer @d is NULL, no action is performed.
 */


void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}
