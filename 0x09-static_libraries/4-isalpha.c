#include "main.h"
/**
 * _isalpha - Checks if a character is non-alphabetic.
 * @c: The character to be checked.
 * Return: 1 if the character is non-alphabetic, 0 if it is alphabetic.
 */



int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	return (0);
}
