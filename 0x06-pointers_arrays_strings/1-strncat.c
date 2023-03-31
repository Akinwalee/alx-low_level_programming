#include "main.h"

/**
 * *_strncat - Concatenates 2 strings while specifying the number of the
 * second string to include with the first one.
 *
 * @dest: Variable for the first string
 * @src: Variable for the second string
 * @n: Variable for number of byte of second string to use
 *
 * Return: Pointer to the resulting concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
