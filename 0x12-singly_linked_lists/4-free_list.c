#include "lists.h"

/**
 * free_list - Frees all nodes of a linked list and associated memory.
 * @head: Pointer to the head of the linked list to be freed.
 */

void free_list(list_t *head)
{
	list_t *current;


	while (head != NULL)
	{
		current = head;
		head = head->next;

		free(current->str);
		free(current);
	}
}
