#include <stdlib.h>




/**
 * new_dog - Creates a new dog structure and assigns values to its members.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner's name.
 *
 * Return: Pointer to the newly created dog structure.
 *         NULL if memory allocation fails.
 */






dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog = malloc(sizeof(dog_t));

	if (mydog == NULL)
	{
		return (NULL);
	}
	mydog->name = name;
	mydog->age = age;
	mydog->owner = owner;
	return (mydog);
}
