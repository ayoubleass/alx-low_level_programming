#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a specified index.
 * @head: A pointer to a pointer to the head of the linked list.
 * @idx: The index at which the new node will be inserted (starting from 0).
 * @n: The integer value to be stored in the new node.
 * Return: If the new node is successfully inserted, else NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int listLength = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || *head == NULL)
		return (NULL);

	new_node->n  = n;
	tmp = *head;
	if (idx == 0)
	{
		new_node->next = tmp;
		*head = new_node;
		return (new_node);
	}
	while (tmp != NULL && listLength < idx - 1)
	{
		tmp = tmp->next;
		listLength++;
	}

	if (tmp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
