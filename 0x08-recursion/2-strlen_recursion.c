#include "main.h"

/**
 * _strlen_recursion - Return the length of a string
 *
 * @s: The string whose length will be returned
 *
 * Return: The legnth of the string stored in variable s.
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length = length + 1;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
