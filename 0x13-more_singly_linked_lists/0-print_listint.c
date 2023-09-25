#include "lists.h"

/**
 * printList - recursive function that print all the elements in the list
 * @h: the list head
 * Return: size of the lsit
 */


size_t printList(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	return (1 + printList(h->next));
}

/**
 * print_listint  - recursive function that print all the elements in the list
 * @h: the list head
 * Return: size of the lsit
 */


size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	size_t size = 0;

	current = h;
	if (current == NULL)
	{
		return (-1);
	}
	size = printList(current);
	return (size);
}



