#include <stdio.h>

/**
 * main - Prints all base 16 numbers in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hex, hexNum;

	for (hexNum = 0; hexNum < 10; hexNum++)
		putchar(hexNum + '0');
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');

	return (0);
}
