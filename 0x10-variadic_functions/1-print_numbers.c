#include <stdarg.h>
#include <stdio.h>



void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0 ; i < n ; i++)
	{
		
		if (i > 0 && separator != NULL)
			printf("%s ",separator);
		printf("%d", va_arg(nums, int));
	}
	printf("\n");

	va_end(nums);
}
