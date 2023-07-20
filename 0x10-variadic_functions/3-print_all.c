#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Prints anything based on the given format.
 *
 * @format: The format string indicating the types of arguments.
 * ...: The variable number of arguments to be printed.
 */




void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char c;
	char *str;

	va_start(args, format);
	while (format && format[i])
	{
		c = format[i];
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(args, int));
			break;
			case 'f':
				printf("%f", va_arg(args, double));
			break;
			case 'c':
				printf("%c", va_arg(args, int));
			break;

			case 's':
				str = va_arg(args, char *);
				printf("%s", (str != NULL) ? str : "(nil)");
			break;

			default:
			break;
		}
		printf("%s", (format[i + 1]
		&& (c == 'c' || c == 'i' || c == 'f' || c == 's')) ? ", " : "");
		i++;
	}
	printf("\n");
	va_end(args);
}
