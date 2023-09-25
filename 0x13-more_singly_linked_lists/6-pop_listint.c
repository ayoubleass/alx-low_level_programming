#include "lists.h"


/**
 * pop_listint - Remove the first node of a linked list and return its data.
 * @head: A pointer to a pointer to the head of the linked list
 * Return: The integer data from the removed node, or 0 if the list is empty.
 */


int pop_listint(listint_t **head)
{
	listint_t *first;
	int data;

	if (*head == NULL)
		return (0);

	first = *head;
	*head = first->next;
	data = first->n;

	free(first);
	return (data);
}
