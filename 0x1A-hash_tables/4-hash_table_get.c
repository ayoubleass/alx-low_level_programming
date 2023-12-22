#include "hash_tables.h"


/**
 * hash_table_get - Retrieves the value associated with a key in a hash table.
 * @ht: The hash table to search for the key.
 * @key: The key to look up.
 *
 * Return: The value associated with the key, or NULL if the key is not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((unsigned char *)key,  ht->size);
	hash_node_t *item = ht->array[index];

	if (item  == NULL)
		return (NULL);
	return (item->value);
}
