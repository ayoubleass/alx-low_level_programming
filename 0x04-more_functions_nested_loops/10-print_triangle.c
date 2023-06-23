#include "main.h"
/**
 * print_triangle - Prints a triangle pattern of a specified size
 * @size: The size of the triangle
 */








void print_triangle(int size)
{
	int height, base;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (height = 1; height <= size; height++)
	{
		for (base = size; base > height; base--)
		{
			_putchar(' ');
		}
		for (base = 1; base <= height; base++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
