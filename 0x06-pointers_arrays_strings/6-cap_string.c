#include "main.h"

/**
 * *cap_string - Capitalize all words of string
 *
 * @a - The string to capitalize.
 *
 * Return: The resulting capitalized string
 */

char *cap_string(char *a)
{
	int i = 0;

	while (a[i])
	{
		while (!(a[i] >= 'a' && a[i] <= 'z'))
			i++;

		if (a[i - 1] == ' ' ||
		    a[i - 1] == '\t' ||
		    a[i - 1] == '\n' ||
		    a[i - 1] == ',' ||
		    a[i - 1] == ';' ||
		    a[i - 1] == '.' ||
		    a[i - 1] == '!' ||
		    a[i - 1] == '?' ||
		    a[i - 1] == '"' ||
		    a[i - 1] == '(' ||
		    a[i - 1] == ')' ||
		    a[i - 1] == '{' ||
		    a[i - 1] == '}' ||
		    i == 0)
			a[i] -= 32;

		i++;
	}

	return (a);
}
