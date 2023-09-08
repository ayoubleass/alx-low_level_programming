#include <stdio.h>
#include <stdlib.h>





int main(int argc, char *argv[])
{
	int i;
	char *num1 = argv[1];
	char *num2 = argv[2];

	if (argc != 3)
	{
		printf("Error");
		exit(98);
	}

	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!(num1[i]  >= '0') && !(num1[i] <= '9'))
		{
			printf("Error\n");
			exit(98);
		}
	}


	for (i = 0; num2[i] != '\0'; i++)
	{
		if (!(num2[i]  >= '0') && !(num2[i] <= '9'))
		{
			printf("Error\n");
			exit(98);
		}
	}

	printf("%d\n", (atoi(num1) * atoi(num2)));
	return (atoi(num1) * atoi(num2));
}
