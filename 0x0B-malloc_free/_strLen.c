#include <limits.h>
#include <stdio.h>
#include <stdlib.h>



/**
 * strLength - return the size of a string .
 * @str: the first element of the passed string
 * @n: index
 * Return: the size of a string
 */

int strLength(char *str, int n)
{
        if (str != NULL)
        {
                if (str[n] == '\0')
                        return (n);

                return (strLength(str, n + 1));
        }
        return (n);
}
