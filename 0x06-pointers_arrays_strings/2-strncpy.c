#include "main.h"

/**
 * *_strncpy - Copies the string from the second argument to the
 * location speocified by the first argument.
 *
 * @dest: First argument
 * @src: Second argument
 * @n: Variale for the number of bytes of the second argument to copy.
 *
 * Return: Pointer to the copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
