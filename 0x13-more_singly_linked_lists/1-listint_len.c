#include "lists.h"
/**
 *listint_len -  returns the number of elements in a linked
 *@h: pointer to the node
 *Return: the number of elements in a linked
 */


size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	int nodes = 0;

	current = h;

	while (current != NULL)
	{
		current = current->next;
		nodes++;
	}
	return (nodes);
}
