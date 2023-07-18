#include "dog.h"
#include <stdlib.h> 









dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog = malloc(sizeof(dog_t));
	mydog->name = name;
	mydog->age = age;
	mydog->owner = owner;
	return mydog;
	
}
