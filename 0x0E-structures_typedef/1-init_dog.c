#include "dog.h"
#include <stdlib.h>
#include <string.h>



/**
 * init_dog - Initializes a dog structure with provided values.
 * @d: A pointer to a struct dog to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner's name of the dog.
 */




void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = malloc(strlen(name) + 1);
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);

	if (d->name != NULL)
		strcpy(d->name, name);

	if (s->owner != NULL)
		strcpy(d->owner, owner);

}





