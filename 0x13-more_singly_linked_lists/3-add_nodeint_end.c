#include "lists.h"

/**
 * helper - Recursively traverse a linked list to add a node at the end.
 * @current: The current node being processed.
 * @end: The new node to be added at the end of the list.
 *
 */

void helper(listint_t *current, listint_t *end)
{
	if (current->next == NULL)
		current->next = end;
	else
		helper(current->next, end);
}




/**
 * add_nodeint_end - Add a new node at the end of a linked list.
 * @head: A pointer to the pointer of the head of the list.
 * @n: The integer data to be stored in the new node.
 * Return: A pointer to the head of the modified list.
 *         If memory allocation fails, returns NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *current;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
	return (NULL);

	end->n = n;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (*head);
	}
	current = *head;
	helper(current, end);

	return (end);
}
