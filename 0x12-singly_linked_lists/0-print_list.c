#include "lists.h"

/**
 * print_list - Prints all the elements of a list
 *
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes (Success). [0] (nil) otherwise
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		node++;
	}

	return (node);
}
