#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the product of two numbers
 *@argc: int
 *@argv: pointer to an arry of strings
 *Return: 0 || 1
 */



int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
