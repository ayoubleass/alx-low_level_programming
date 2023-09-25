#include "lists.h"

/**
 * listint_len - count the number of elements that the list contains
 * @h: head of the list
 * Return:  returns the number of elements in a linked listint_t list
 */


size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + listint_len(h->next));
}
