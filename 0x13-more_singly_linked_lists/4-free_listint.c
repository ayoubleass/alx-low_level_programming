#include "lists.h"
/**
 * free_listint - Frees all nodes of a linked list.
 * @head: A pointer to the head of the linked list to be freed.
 *
 * Return: None (void).
 */




void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
