#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves the value associated to a key
 *
 * @ht: The hash table
 * @key: The key whose value is to be retrieved
 *
 * Return: Value associated with the key (Success) or NULL (Key is not found)
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *current = NULL;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	current = ht->array[index];
	return (current->value);
}
