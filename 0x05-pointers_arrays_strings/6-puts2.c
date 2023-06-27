#include "main.h"
#include <string.h>
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int i = 0;
	int length = strlen(str);

	while (i < length)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

