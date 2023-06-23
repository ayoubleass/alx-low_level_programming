#include "main.h"
/**
 *print_square - Prints a square made of '#' characters
 *@size: The size of the square
 */

void print_square(int size)
{
	int row, column;

	if (size <= 0)
		-putchar('\n');
		return;
	for (column = 1; column <= size; column++)
	{
		for (row = 1; row <= size; row++)
			_putchar('#');
		_putchar('\n');
}
