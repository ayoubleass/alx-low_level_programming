#ifndef DOG_H
#define DOG_H
/**
*struct dog -structer datatype
*@name:string
*@age:foat
*@owner:string
 */



struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef  struct dog dog_t;
#include "main.h"
#endif
