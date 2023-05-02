#include <stdlib.h>
#include "main.h"

/**
 * helper - Helper function that fills memory with a constant byte
 *
 * @s: Variable for memory area to be filled
 * @x: Variable for char to copy
 * @n: Variable for number of times to copy b
 *
 * Return: A pointer to the memory location
 */

char *helper(char *s, char x, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = x;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	helper(ptr, 0, nmemb * size);

	return (ptr);
}
