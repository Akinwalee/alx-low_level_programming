#include <stdio.h>

/**
 * main - Prints all alphabets in lower case then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a, A;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (A = 'A'; A <= 'Z'; A++)
		putchar(A);
	putchar('\n');

	return (0);
}
