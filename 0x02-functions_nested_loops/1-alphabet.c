#include "main.h"


int main(void)
{
return print_alphabet();
}

void print_alphabet(void)
{
char c;
for (c = 'A' ; c <= 'Z' ; c++)
{
_putchar(tolower(c));
}
return ;
}
