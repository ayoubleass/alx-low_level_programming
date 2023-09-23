#include "lists.h"
#include <string.h>

/**
 * add_node_end - Add a new node containing
 * a string at the end of a linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: The string to be added to the new node.
 *
 * Return: A pointer to the newly created node,
 * or NULL if memory allocation fails.
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *current;
	int i = 0;

	end = malloc(sizeof(list_t));
	end->str = malloc(strlen(str) + 1);

	if (end == NULL)
		return (NULL);

	end->str = strdup(str);
	if (end->str == NULL)
	{
		free(end);
		return (NULL);
	}
	end->len = strlen(str);
	end->next = NULL;


	if (*head == NULL)
	{
		*head = end;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = end;
	}
	return (end);
}
