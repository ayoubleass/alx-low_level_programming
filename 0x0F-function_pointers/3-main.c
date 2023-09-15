#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 for success, 98 for invalid number of arguments
 */


int main(int argc, char **argv)
{
	int num1 = atoi(argv[1]);
	char *op = argv[2];
	int num2 = atoi(argv[3]);
	int (*operation)(int, int) = get_op_func(op);

	if (argc > 4 || operation == NULL)
	{
		printf("ERROR\n");
		return (98);
	}

	if (num2 == 0)
	{
		printf("ERROR\n");
		return (100);
	}
	printf("%d\n", operation(num1, num2));
	return (0);

}
