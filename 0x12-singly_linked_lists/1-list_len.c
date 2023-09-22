#include "lists.h"
/**
 * list_len - Counts the number of nodes in a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * This function counts the number of nodes in a linked list starting
 * from the provided head pointer. It traverses the linked list and
 * increments the node count until the end of the list is reached (NULL).
 *
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */



size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t nodes = 0;

	current = h;

	while (current != NULL)
	{
		nodes++;
		current = current->next;
	}
	return  (nodes);
}
