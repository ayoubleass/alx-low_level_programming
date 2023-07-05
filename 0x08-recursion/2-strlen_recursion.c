#include "main.h"



int _strlen_recursion(char *s) {
	int length = 0;

	if (*s != '\0')
	{
		length++;
		return (length + _strlen_recursion(s + 1));
	}
	return (length);
}
