#include "main.h"
/**
 *
 *
 *
 *
 *
 */
int print_alphabet();

int main (void)
{
print_alphabet();
return (0);
}


int print_alphabet ()
{	
char c;
for(c='a',c <= 'z',c++)
{
   _putchar(tolower(c));		
}
return (0);
}
