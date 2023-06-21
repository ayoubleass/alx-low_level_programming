#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success) 
 * print_alphabet
 *  Return: Always 0 (Success) 
 */
int print_alphabet(void);

int main(void)
{
print_alphabet();
return (0);
}


int print_alphabet(void)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(tolower(c));

return (0);
}
