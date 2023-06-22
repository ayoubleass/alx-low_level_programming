#include "main.h"
/**
 * print_most_numbers - Prints numbers from 0 to 9, excluding 2 and 4.
 */
void print_most_numbers(void)
{
int num = 0;
for (num; num < 10; num++)
{
	if (num == 2 || num == 4)
	{
	continue;
	}
	_putchar(num + '0');
}
_putchar('\n');
return;
}
