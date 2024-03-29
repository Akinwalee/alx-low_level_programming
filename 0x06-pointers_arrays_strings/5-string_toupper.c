#include "main.h"

/**
 * *string_toupper - Converts all lower case letter of a string to uppercase
 *
 * @a - The string to convert its lower case letter uppercase.
 *
 * Return: The resulting uppercase string
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;

		i++;
	}

	return (a);
}
