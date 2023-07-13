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

	unsigned int length1, length2;
	char *result;

	if (s1 == NULL)
		s1 =  "";
	if (s2 == NULL)
		s2 = "";
	length1 = strlen(s1);
	length2 = strlen(s2);

	if (n >= length2)
		n = length2;

	result = malloc(length1 + n + 1);

	if (result == NULL)
		return (NULL);
	strcpy(result, s1);
	strncat(result, s2, n);
	return (result);
}
