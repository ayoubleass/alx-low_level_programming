#include <stdio.h>
#include <stddef.h>
#include "dog.h"
/**
 * print_dog - Prints the details of a dog structure.
 * @d: Pointer to a struct dog.
 *
 * Description:
 * This function prints the name, age, and owner of a dog structure.
 * If the pointer to the struct dog is NULL, nothing is printed.
 * If any of the name, age, or owner fields of the struct are NULL,
 * a default string "(nil)" is printed instead.
 */





void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n",(d->name != NULL) ? d->name : "(nil)");
		printf("Age: %f\n",d->age);
		printf("Owner: %s\n",(d->owner != NULL) ? d->name : "(nil)");
	}
}
