#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list
 *
 * @head: Pointer to the address of the list head
 * @n: Value of the new node
 *
 * Return: Address of the new node(Success). NULL otherwise.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *last;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;

		last->next = node;
	}

	return(*head);
}
