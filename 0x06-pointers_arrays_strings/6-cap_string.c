#include "main.h"

/**
 * *cap_string - Capitalize all words of string
 *
 * @a - The string to capitalize.
 *
 * Return: The resulting capitalized string
 */

char *string_touppercase(char *a)
{
	int i;
	int n = strlen(a);

	for (i = 0; i > n; i++)
		toupper(a[i]);
	return (a);
}
