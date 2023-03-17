#include <stdio.h>

/**
 * main - Prints all combination of two numbers from 0 to 99
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a <=99; a++)
	{
		putchar((a / 10) + '0');
		putchar((a % 10) + '0');
		if (a == 99)
			continue;
		
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
