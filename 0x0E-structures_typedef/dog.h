#ifndef DOG_H
#define DOG_H
/**
*struct dog -structer datatype
*@name:string
*@age:foat
*@owner:string
 */



typedef dog dog_t;
struct dog
{
	char *name;
	float age;
	char *owner;
};
#include "main.h"
#endif
