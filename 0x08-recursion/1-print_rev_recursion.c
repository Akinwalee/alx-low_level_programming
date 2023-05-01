#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 *
 * helper - Helper function for the main recursion.
 *
 * @s: The string to reverse.
 *
 * Return: Void.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
