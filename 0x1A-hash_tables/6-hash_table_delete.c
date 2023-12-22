#include "hash_tables.h"
/**
 * hash_table_delete - Deletes (frees) a hash table and its contents.
 * @ht: The hash table to be deleted.
 *
 * Return: void
 */






void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	while (i < ht->size)
	{
		hash_node_t *item = ht->array[i];

		if (item && item->key)
			free(item->key);
		if (item  && item->value)
			free(item->value);
		free(item);
		i++;
	}
	free(ht->array);
	free(ht);
}
