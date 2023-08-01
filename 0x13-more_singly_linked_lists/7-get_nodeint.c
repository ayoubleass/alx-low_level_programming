#include "lists.h"
/**
 * get_nodeint_at_index - Retrieves the node at a specified index .
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to be retrieved (starting from 0).
 * Return:  node if the node exists else null
 */



listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int listLenght =  0;

	while (head != NULL)
	{
		if (listLenght == index)
			return (head);
		head = head->next;
		listLenght++;
	}
	return (NULL);

}
