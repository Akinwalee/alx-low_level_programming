#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: The hash table to add a new element to
 * @key: The key of the new element
 * @value: The value of the new element
 *
 * Return: 1 (Success) or 0 (Failure)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *current = NULL;

	hash_node_t *node = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);

	if (ht->array[index] != NULL)
	{
		current = ht->array[index];
		while (current->next)
			current = current->next;

		current->next = node;
		return (1);
	}
	else
	{
		ht->array[index] = node;
		return (1);
	}

	free(node);
	return (0);
}
