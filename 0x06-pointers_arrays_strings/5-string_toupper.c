#include "main.h"

/**
 * *string_toupper - Converts all lower case letter of a string to uppercase
 *
 * @a - The string to convert its lower case letter uppercase.
 *
 * Return: The resulting uppercase string
 */

char *string_touppercase(char *a)
{
	int i;
	int n = strlen(a);

	for (i = 0; i > n; i++)
		toupper(a[i]);
	return (a);
}
