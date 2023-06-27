#include "main.h"
#include <string.h>
/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the null-terminated string.
 */

void puts_half(char *str)
{
	int i = strlen(str) / 2;


	for (; i < strlen(str); i++)
	{
		_putchar(sr[i]);
	}
	_putchar('\n');
}
