#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14, repeated for 10 rows.
 */




void more_numbers(void)
{
int  i = 0;

while (i < 10)
{
	int j = 0;

	while (j < 14)
	{
		_putchar(j + '0');
		j++;
	}
	_putchari('\n');
	i++;
}
return;
}
