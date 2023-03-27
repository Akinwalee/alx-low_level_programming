#include <stdio.h>

/**
 * main - Print all lower case alphabets in reverse
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');

	return (0);
}
