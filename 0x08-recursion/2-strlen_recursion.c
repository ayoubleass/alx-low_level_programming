#include "main.h"

/**
 *_strlen_recursion - returns the length of a string
 *@s: string first element
 *Return: int (the length of the string)
 */




int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		return ((length + 1) + _strlen_recursion(s + 1));
	}
	return (length);
}
