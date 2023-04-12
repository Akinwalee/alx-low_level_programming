#include <stdio.h>

/**
 * main - Prints all arguments passed to the function
 *
 * @argc: Argc
 * @argv: Argv
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc - 1; i++)
		printf("%s\n", argv[i]);

	return (0);
}
