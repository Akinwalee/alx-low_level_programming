#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list
 *
 * @head: Pointer to the address of the head of the list
 * @n: Value of the new node
 *
 * Return: Address of the new node (Success). NULL otherwise.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node;

	return (node);
}
