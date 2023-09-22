#include "lists.h"
/**
 * print_list - Prints the elements of a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */






size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t nodes = 0;

	current = h;
	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] ", current->len);
			printf("%s\n", current->str);
		}
		nodes++;
		current = current->next;
	}
	return (nodes);
}

