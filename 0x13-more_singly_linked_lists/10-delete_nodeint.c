#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 *
 * @head: Pointer to a pointer to the head of the linked list.
 * @index: Index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if the deletion is successful, 0 if not.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *node_delete;
	unsigned int listLength = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}


	while (current != NULL)
	{
		if (listLength == index - 1)
		{
			node_delete = current->next;
			break;
		}
		current = current->next;
		listLength++;
	}
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}
	current->next = node_delete->next;
	free(node_delete);

	return (1);
}
