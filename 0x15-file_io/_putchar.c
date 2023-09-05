#include <usnistd.h>

/*
 * _putchar - Prints the content of character c to std out
 *
 * @c: character to print
 *
 * Return: Te character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
