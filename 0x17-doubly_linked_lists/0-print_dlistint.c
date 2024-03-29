#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 *
 * @head: The head pointer of the doubly linked list to print.
 *
 * Return: The number of nodes in the doubly linked list.
 */

size_t print_dlistint(const dlistint_t *head)
{
	int count = 0;

	if (head == NULL || head == 0)
	{
		return (EXIT_FAILURE);
	}

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}

	return (count);
}
