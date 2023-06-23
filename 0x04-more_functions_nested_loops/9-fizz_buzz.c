#include <stdio.h>
/**
 *main - Prints numbers from 1 to 100
 *with "Fizz", "Buzz", or "FizzBuzz" conditions
 *
 *
 *Return: 0 (indicating successful execution)
 */









int main(void)
{
	int i;
	int n = 100;

	for (i = 1; i <= n ; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
