#include <stdio.h>
#include <stdlib.h>

/** main - Multiplies 2 numbers passed as an argument to the program
 *
 * @argc: Argc
 * @argv: Argv
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		printf("%d\n", num1 * num2);
		
		return (0);
	}

	printf("Error\n");

	return (1);
}
