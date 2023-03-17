#include <stdio.h>

/**
 *main - Prints all the possible combination of two numbers
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 20; a++)
	{
		putchar(a / 10 + '0');
		putchar(a % 10 + '0');
		if (a < 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
