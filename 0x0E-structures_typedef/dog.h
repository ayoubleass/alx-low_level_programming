#ifndef DOG
#define DOG

#include <stdio.h>

/**
 * struct dog -  Represents information about a dog.
 * @name: dog name
 * @age: dog age
 * @owner: the owner of the dog
 *
 * Description: This structure is used to store information about a dog,
 * including its name, age, and owner's name.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef  struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
#endif
