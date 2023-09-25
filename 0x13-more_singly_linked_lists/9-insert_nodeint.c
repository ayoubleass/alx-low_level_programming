#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a
 * specified position in a list.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index at which to insert the new node.
 * @n: The data that the new node will contain.
 * Return: Upon success, returns a pointer to the new node.
 * On failure or if the index is out of bounds, returns NULL.
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node, *prev_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current_node = *head;


	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return  (new_node);
	}

	while (current_node != NULL)
	{
		if (i < idx)
		{
			prev_node = current_node;
		}

		if (i == idx)
		{
			prev_node->next = new_node;
			new_node->next = current_node;
			return (new_node);
		}

		if (i > idx)
			free(new_node);

		current_node = current_node->next;
		i++;
	}
	return (NULL);
}
