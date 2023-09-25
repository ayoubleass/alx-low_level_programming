#include "lists.h"


/**
 * free_listint2 - Set the the head pointer  to NULL
 * @head:  pointer to a pointer to the head of the linked list.
 */



void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head!= NULL && *head != NULL)
	{
		current_node = *head;
		while (*head != NULL)
		{
			current_node = *head;
			*head  = (*head)->next;
			free(current_node);
		}
	}

	*head = NULL;
}
