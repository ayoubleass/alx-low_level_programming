#include "lists.h"

/**
 * free_listint2 - Frees all nodes of a linked list and sets head to NULL.
 * @head: A pointer to a pointer to the head of the linked list.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (*head != NULL)
	{
		while (*head != NULL)
		{
			current = *head;
			*head   = (*head)->next;

			free(current);
		}
	}
}
