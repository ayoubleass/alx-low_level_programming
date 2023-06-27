#include "main.h"
#include <string.h>
/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the null-terminated string.
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int i;

	for (i =  (length / 2) + 1; i <  length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
