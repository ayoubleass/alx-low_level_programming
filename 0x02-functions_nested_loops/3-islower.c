#include "main.h"
/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */

int _islower(int c)
{
if (c >= 65 && c <= 90)
{
return (0);
}
if (c >=  96 && c <= 127)
{
return (1);
}
return (0);
}
