#include "lists.h"

/**
 * free_listint -Frees a list
 *
 * @head: Pointer to the head of the list
 *
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
