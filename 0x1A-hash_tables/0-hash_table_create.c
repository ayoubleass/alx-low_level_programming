#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table.
 * @size: Size of the hash table.
 *
 * Return: A pointer to the newly created hash table,
 *         or NULL if memory allocation fails.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (; i < size; i++)
	table->array[i] = NULL;
	return (table);
}
