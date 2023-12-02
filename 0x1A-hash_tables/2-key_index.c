#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 *
 * @key: The key to find it's index
 * @size: The size of the hash table
 *
 * Return: Index of the key in the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int index;

	index = hash_djb2(key) % size;

	return (index);
}
