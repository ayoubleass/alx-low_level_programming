#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14, repeated for 10 rows.
 */




void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 1; j <= 14; j++)
{
_putchar(j + '0');
}
_putchar('\n');
}
}
