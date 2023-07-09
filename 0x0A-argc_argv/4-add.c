#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, 1 if an error occurred
 */



int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *current = argv[i];

		while (*current)
		{
			int asciiValue = (int)*current;

			if (asciiValue < 48 || asciiValue > 57)
			{
				printf("Error\n");
				return (1);
			}
			current++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);

}
