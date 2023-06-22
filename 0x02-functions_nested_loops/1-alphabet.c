#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet.
 *
 * Description: This function prints the lowercase alphabet from 'a' to 'z'
 * using the _putchar function. Each character is printed on a new line.
 */
void print_alphabet(void)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');

return;
}
