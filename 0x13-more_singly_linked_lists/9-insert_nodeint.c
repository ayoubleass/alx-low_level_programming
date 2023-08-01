#include "lists.h"



listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int listLength = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (new_node);


	tmp = *head;
	while (*head != NULL)
	{
		if (listLength == idx - 1)
		{
			new_node->n = n;
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		tmp = tmp->next;
		listLength++;
	}
	return (new_node);
}
