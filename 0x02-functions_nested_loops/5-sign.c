#include "main.h"
/**
 * print_sign - Prints the sign of a number.
 * @n: The number to evaluate.
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is negative.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
_putchar('-1');
return (-1);
}
