#include "lists.h"

/**
 * add_node - Adds a new node to the beginning of a list
 *
 * @head: Pointer to the header of the list
 * @str: String to be stored in the new node
 *
 * Return: Address of the new node (Success). NULL otherwise
 */

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *node;
	char *tmp;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	tmp = strdup(str);
	if (tmp == NULL)
	{
		free(node);
		return (NULL);
	}

	while (str[len])
		len++;

	node->str = tmp;
	node->len = len;
	node->next = *head;

	*head = node;

	return (node);
}
