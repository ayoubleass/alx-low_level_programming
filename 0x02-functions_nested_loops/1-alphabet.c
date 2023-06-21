#include "main.h"


int main(void)
{
return print_alphabet();
}


int print_alphabet(void)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(tolower(c));

return (0);
}
