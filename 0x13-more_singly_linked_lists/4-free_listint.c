#include "lists.h"

/**
 * free_listint -  free the memory allocated for a singly linked lis
 * @head: a pointer to the head of the linked list.
 */



void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
