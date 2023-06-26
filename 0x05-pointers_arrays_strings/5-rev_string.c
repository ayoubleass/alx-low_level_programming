#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a null-terminated string in place.
 * @s: Pointer to the null-terminated string to be reversed.
 */






void rev_string(char *s)
{
	int length = strlen(s);

	for (int i = 0; i < length / 2; i++)
	{
		char ref = s[i];

		s[i] = s[length - 1 - i];
		s[length - 1 - i] = ref;
	}
}

