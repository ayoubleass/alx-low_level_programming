#include "main.h"
/**
 * cap_string - Capitalizes all words in a string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */



char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'
		|| str[i - 1] == '\n' || str[i - 1] == ','
		|| str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!'
		|| str[i - 1] == '?'
		|| str[i - 1] == '"'
		|| str[i - 1] == '(' || str[i - 1] == ')'
		|| str[i - 1] == '{' || str[i - 1] == '}')
		{
			str[i] -= ('a' - 'A');
		}
	}
	return (str);
}
