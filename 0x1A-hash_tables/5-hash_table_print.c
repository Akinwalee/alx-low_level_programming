#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table
 *
 * @ht: The hash table to print
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	int i = 0;
	hash_node_t *current = NULL;
	int flag = 0;

	if (ht == NULL)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current)
		{
			if (flag == 1)
				printf(", ");

			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			flag = 1;
		}
	}
	printf("}\n");
}
