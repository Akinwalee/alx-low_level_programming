#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 *
 * @s: The string to reverse.
 *
 * Return: Void.
 */

void _print_rev_recursion(char *s)
{
	int len = 0;
	int i = 0;
	char temp;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
