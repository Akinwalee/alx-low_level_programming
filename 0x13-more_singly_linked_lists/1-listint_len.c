#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked lisdt.
 *
 * @h: Pointer to the head of the list.
 *
 * Return: Number of elements in te linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
