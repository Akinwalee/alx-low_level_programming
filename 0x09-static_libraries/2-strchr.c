#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 *
 * @s: The input variable
 * @c: The input variable
 *
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
