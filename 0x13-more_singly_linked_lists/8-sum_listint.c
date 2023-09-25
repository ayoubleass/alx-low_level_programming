#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of the  list.
 * @head: pointer to the struct listint_t .
 * Return: the sum of all the n on each element .
 */




int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return  (sum);
}
