#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 *
 * @s: The string to reverse.
 *
 * Return: Void.
 */

void helper(char *s, int i, int j)
{
	char temp;

	temp = s[i];
	s[i] = s[j];
	s[j] = temp;
	helper(s, i + 1, j - 1);
}

void _print_rev_recursion(char *s)
{
	int len = strlen(s);
	helper(s, 0, len - 1);
	printf("%s", s);
}
