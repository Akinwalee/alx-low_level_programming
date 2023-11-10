#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 *
 * @head: Pointer to the head of the list
 * @n: Data to add to the end of the list
 *
 * Return: The address of the new element (Success) or NULL (Failure)
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *p = malloc(sizeof(dlistint_t));

	if (!head)
		return (NULL);

	while (head)
	{
		if (head->next = NULL)
		{
			p->n = n;
			p->next = NULL;
			p->prev = head;
			head->next = p;
		}
		head = head->next;
	}

	return (p)
}
