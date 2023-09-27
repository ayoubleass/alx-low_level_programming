#include "lists.h"
/**
 * reverse_listint - Reverses a linked list of integers.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: Pointer to the head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new_list, *tmp;
	listint_t *h;

	h = NULL;
	while (*head != NULL)
	{
		tmp = *head;
		new_list = malloc(sizeof(listint_t));
		if (new_list == NULL)
			return (NULL);
		new_list->n = (*head)->n;
		new_list->next = h;
		h = new_list;
		*head = (*head)->next;
		free(tmp);
	}
	*head = new_list;
	return (new_list);
}
