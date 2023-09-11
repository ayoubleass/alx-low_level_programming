#include "dog.h"
#include <stddef.h>

/**
 * print_dog - Prints the attributes of a struct dog.
 * @d: A pointer to a struct dog to be printed.
 */

void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->name : "(nil)");
	}
}
