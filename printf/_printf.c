#include "main.h"







int _printf(char *str, ...)
{
	va_list args;
	char specifier;
	char *s;
	char c;
	int i;
	int size = 0;

	va_start(args, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			if (*str >= 'a' && *str <= 'z' || *str == '%')
				specifier = *str;
			else
				return (-1);

			switch (specifier)
			{
				case 's':
				s = va_arg(args, char *);
				size += printString(s);
				break;
				case 'c':
				c = va_arg(args, int);
				_putchar(c);
				break;
				case 'd':
				case 'i':
				i = va_arg(args, int);
				size += print_Integer(i);
				break;
				case '%':
					_putchar('%');
					size++;
				break;
				default :
					_putchar('%');
					size++;
					_putchar(specifier);
					size++;
			}
		}
		else 
		{
			_putchar(*str);
			size++;
		}
		str++;
	}
	va_end(args);
	return (size);
}



int printString(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		return 1 + printString(s + 1);
	}
	return (0);
}



int print_Integer(int num)
{
	int i = 0;
	int numSize = 0;
	int size = 0;
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		size++;
	}

	if (num == 0)
	{
		_putchar('0');
		size++;
		return;
	}

	numSize = getIntSize(num);

	if (numSize == 1)
	{
		_putchar(num + '0');
		size++;
	}
	else
	{
		int *buffer = malloc(sizeof(int) * numSize);
	
		if (buffer != NULL)
		{
			while (i < numSize)
			{
				buffer[i] = num % 10;
				num /= 10;
				i++;
			}
			while (i > 0)
			{
				i--;
				_putchar(buffer[i] + '0');
				size++;
			}
			free(buffer);
		}
	}
	return (size);
}



int getIntSize(int num)
{
	if (num == 0)
		return (0);
	if (num < 10)
		return (1);

	return (1 + getIntSize(num / 10));
}

int _putchar(char c) { return (write(1, &c, 1)); }
