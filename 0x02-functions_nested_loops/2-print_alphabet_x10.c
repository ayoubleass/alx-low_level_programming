#include "main.c"

/**
 *print_alphabet_x10 - Prints the alphabet ten times.
 *
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i <= 10)
{
char c = 'a';

while (c <= 'z')
{
_putchar( c);
c++;
}
putchar('\n');
i++;
}
}
