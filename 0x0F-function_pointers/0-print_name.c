#include <stdio.h>
/**
 * print_name - Calls a function to print a name.
 * @name: Pointer to the name to be printed.
 * @f: Pointer to a function that prints a name (char pointer argument).
 *
 */



void print_name(char *name, void (*f)(char *))
{
	f(name);
	printf("\n");
}
