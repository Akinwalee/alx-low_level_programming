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
	hash_table_t *hash_table[size];

	return (*hash_table);
}
