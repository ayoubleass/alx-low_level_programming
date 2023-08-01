#include "lists.h"

/**
*print_listint -  that prints all the elements of a listint_t list.
*@h: node
*Return: the numbers of nodes in the list
*/



size_t print_listint(const listint_t *h)
{

	const listint_t *current;
	int nodes = 0;

	current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodes++;
	}
	return (nodes);
}
