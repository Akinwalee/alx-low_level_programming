#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 *
 * @size: The size of the hash table array
 *
 * Return: A pointer to the hash table (Success) or NULL (Failure)
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;

	hash_table->array = (hash_node_t **)(malloc(sizeof(hash_node_t *)));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	return (hash_table);
}
