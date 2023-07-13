#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two strings up to n characters.
 * @s1: The first input string.
 * @s2: The second input string.
 * @n: The maximum number of characters from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string,
 * or NULL on failure.
 */



char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j;
	int length;
	char *p;

	if (n >= strlen(s2))
	{
		length = sizeof(s2);
	}
	else
	{
		length = n * sizeof(char);
	}

	p = malloc(sizeof(s1) + length);

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		p[i + j] = s2[j];
	}
	return (p);
}
