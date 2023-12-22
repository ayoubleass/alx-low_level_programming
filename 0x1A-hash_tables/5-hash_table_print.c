#include "hash_tables.h"



/**
 * hash_table_print - Prints the contents of a hash table.
 * @ht: The hash table to print.
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int printed  = 0;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			printed = 1;
		}	
		i++;
	}
	printf("}\n");
}
