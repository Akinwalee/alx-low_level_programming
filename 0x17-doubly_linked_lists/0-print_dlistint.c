#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 *
 * @h: The head pointer of the doubly linked list to print.
 *
 * Return: The number of nodes in the doubly linked list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (head == NULL)
	{
		return (1)
	}
	
	dlistint_t *ptr = NULL;
	ptr = head;

	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = prt->next;
	}

	return (count);
}
