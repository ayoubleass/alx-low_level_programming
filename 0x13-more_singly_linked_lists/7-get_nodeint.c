#include "main.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list .
 * @head: pointer to the head of the list .
 * @index: the nth node
 * Return: return the node that matche the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;
	unsigned int i = 0;

	current_node = head;
	while (current_node != NULL)
	{
		if (i == index)
		{
			return (current_node);
		}
		current_node = current_node->next;
		i++;
	}

	return  (NULL);
}
