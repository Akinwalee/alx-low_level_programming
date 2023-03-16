#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	char *m = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, m, strlen(m));

	return (90);
}
