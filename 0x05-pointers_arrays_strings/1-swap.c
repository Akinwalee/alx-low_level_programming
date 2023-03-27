#include <stdio.h>

/**
 * swap_int - Takes the pointers of two integres as a arguments
 * and swaps there values.
 *
 * @a: Pointer variable of the first integer
 * @b: Pointer variable of the second integer
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = a;
}
