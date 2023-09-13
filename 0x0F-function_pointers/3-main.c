#include <stdio.h>
#include <stdlib.h>
#include "get_op_func.c"



int main(int argc, char **argv)
{
	int num1 = atoi(argv[1]);
	char *op = argv[2];
	int num2 =atoi( argv[3]);



	int (*operation)(int, int) = get_op_func(op);

	if (argc != 4 || operation == NULL) 
	{
		printf("ERROR\n");
		return (98);
	}

	if (num2 == 0)
	{
		printf("ERROR\n");
		return (100);
	}
	return (operation(num1, num2));

}
