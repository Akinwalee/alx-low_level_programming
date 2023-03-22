#include <stdio.h>

/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: Always 0 (Success)
 */

void main(void)
{
	int i;

	for (i = 0; i <= 3; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(':');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			putchar('\n');
		}
	}
	return;
}
