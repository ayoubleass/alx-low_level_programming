#include "dog.h"
#include <stddef.h>

/**
 * print_dog - Prints the attributes of a struct dog.
 * @d: A pointer to a struct dog to be printed.
 */

void print_dog(struct dog *d)
{
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else 
	{
		printf("Name: (nil)");
	}

	printf("Age: %f\n", d->age);

	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: (nil)");
	}
}
