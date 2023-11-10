#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of doubly linked list
 *
 * @head: Pointer to the head of the doubly linked ist
 * @n: The data to add to the list
 *
 * Return: Addrees of the new element (Success). NULL if failure.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p = malloc(sizeof(dlistint_t));

	p->n = n;
	p->next = *head;
	p->prev = NULL;

	if (*head != NULL)
		(*head)->prev = p;

	*head = p;

	return (p);
}
