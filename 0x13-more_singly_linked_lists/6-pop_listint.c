#include "lists.h"
/**
 * pop_listint - Removes the first node of a linked list and returns its value.
 * @head: A pointer to a pointer to the head of the linked list.
 * Return: The integer value stored in the first node of the linked list
 */



int pop_listint(listint_t **head)
{

	listint_t *firstNode;
	int value;

	if (*head == NULL)
		return (0);
	firstNode = *head;

	*head = firstNode->next;
	value = firstNode->n;
	free(firstNode);
	return (value);
}
