#include "function_pointers.h"


/**
 * print_name - Calls a function to print a name.
 *
 * @name: Pointer to a string containing the name to be printed.
 * @f: Pointer to a function that takes
 * a char pointer as a parameter and prints it.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
