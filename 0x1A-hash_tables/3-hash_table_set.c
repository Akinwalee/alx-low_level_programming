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

	if (ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	if (ht->array[index] != NULL)
	{
		current = ht->array[index];
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			free(node->key);
			free(node->value);
			free(node);
			current->value = strdup(value);
			return (1);
		}
		node->next = current;
		ht->array[index] = node;
		return (1);
	}
	else
	{
		ht->array[index] = node;
		return (1);
	}
	free(node->key);
	free(node->value);
	free(node);
	return (0);
}
