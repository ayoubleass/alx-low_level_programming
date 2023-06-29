#include "main.h"
/**
 * _strcmp - Compare two strings.
 * @s1: Pointer to the first string to compare.
 * @s2: Pointer to the second string to compare.
 *
 * Return: An integer less than, equal to, or greater than zero if the first
 * string is found, respectively, to be less than, to match, or be greater
 * than the second string.
 */






int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i])
}
