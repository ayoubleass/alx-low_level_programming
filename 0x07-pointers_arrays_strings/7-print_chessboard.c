#include "main.h"


/**
 * print_chessboard - Prints the chessboard.
 * @a: Pointer to the chessboard array.
 *
 * Description: This function prints the chessboard represented by a 2D array
 * of characters. Each character represents a piece on the chessboard.
 * The chessboard is printed row by row, with each row separated by a newline.
 *
 * Return: None.
 */


void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8 ; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
