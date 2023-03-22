#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int i;

	for (i = 0; i <= 23; i++)
	{
		int j;
				
		for (j = 0; j <= 59; j++)
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
