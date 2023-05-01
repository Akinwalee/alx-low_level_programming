#include "main.h"

/**
 * wildcmp - Compares 2 strings
 *
 * @s1: First string to compare
 * @s2: Second string to compare with
 *
 * Return: 1 if the strings are identical. 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	if (!*s1)
	{i
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}

	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
