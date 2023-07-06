#include "lists.h"

/**
 * add_node_end - Adds a new node to the end of a list
 *
 * @head: Pointer to the head of the list
 * @str: String to be stored in the new node
 *
 * Return: Address of the new node (Success). NULL otherwise
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *node, *last;
	char *tmp;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	tmp = strdup(str);
	if (str == NULL)
	{
		free(node);
		return (NULL);
	}

	while (str[len])
		len++;

	node->str = tmp;
	node->len = len;
	node->next = NULL;

	if (*head == NULL)
		*head = node;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = node;
	}

	return (*head);
}
