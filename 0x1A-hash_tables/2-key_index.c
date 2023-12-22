#include "hash_tables.h"



/**
 * key_index - Computes the index of a key in a hash table.
 * @key: The key to compute the index for.
 * @size: Size of the hash table.
 *
 * Return: The computed index for the given key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
