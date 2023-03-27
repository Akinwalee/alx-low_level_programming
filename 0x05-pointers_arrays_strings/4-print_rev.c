#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints a string in reverse
 *
 * @s: the string to be printed
 *
 * Return: void.
 */

void print_rev(char *s)
{
	int reverse, length, i;

	for (i = 0; i <= length - 1; i++)
	{
		rev = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = rev;
	}

	puts(s);
}
