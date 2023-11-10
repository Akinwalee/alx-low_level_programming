#include "lists.h"

/**
 * dlistint_len - Computes the length of a doubly linked list
 *
 * @head: Pointer to the head of the doubly linked list
 *
 * Return: Lenght of the soubly linked list.
 */

size_t dlistint_len(const dlistint_t *head)
{
	int count = 0;

	if (head == NULL)
	{
		return (EXIT_FAILURE);
	}

	while (head)
	{
		count++;
		head = head->next;
	}

	return (count);
}
