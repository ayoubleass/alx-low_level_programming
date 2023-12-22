#include "hash_tables.h"
/**
 * list_head - Creates a new node for a hash table.
 * @key: The key for the new node.
 * @value: The value associated with the key.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */


hash_node_t *list_head(const char *key, const char *value)
{
	hash_node_t *new_item = malloc(sizeof(hash_node_t));

	if (new_item == NULL || key == NULL || value == NULL)
		return (NULL);
	new_item->key = malloc(strlen(key) + 1);
	new_item->value = malloc(strlen(value) + 1);

	if (new_item->value == NULL || new_item->key == NULL)
	{
		free(new_item->key);
		free(new_item->value);
		free(new_item);
		return (NULL);
	}
	strcpy(new_item->value, value);
	strcpy(new_item->key, key);
	new_item->next = NULL;
	return (new_item);
}
/**
 * hash_table_set - Inserts or updates a key-value pair in a hash table.
 * @ht: The hash table to insert or update the key-value pair.
 * @key: The key to insert or update.
 * @value: The value associated with the key.
 *
 * Return: 1 on success, 0 on failure.
 */



int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *item;

	if (key == NULL || value == NULL)
		return (0);
	item = ht->array[index];
	if (item == NULL)
	{
		item = list_head(key, value);
		if (item == NULL)
			return (0);
		ht->array[index] = item;
	}
	else
	{
		hash_node_t *new_item  = list_head(key, value);

		if (new_item == NULL)
			return (0);
		item->next = new_item;
	}
	return (1);
}
