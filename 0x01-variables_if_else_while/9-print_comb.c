#include <stdio.h>

/**
 * main - Prints single digits seperated by comma
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a <10; a++)
	{	
		if (a == 9)
		{
			putchar(a + '0');
		}
		else
		{
			putchar(a + '0');
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
