#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b:Variable for number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *size;

	size = malloc(b);
	if (size == NULL)
		exit(98);

	return (size);
}
