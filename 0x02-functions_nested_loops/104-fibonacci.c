#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int counter = 2;

	int a = 1;
	int b = a + 1;
	int c = a + b;

	printf("%.0f, ", a);
	printf("%.0f, ", b);
	while (counter < 98)
	{
		counter++;
		printf("%.0f", c);
		a = b;
		b = c;
		c = a + b;
		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
