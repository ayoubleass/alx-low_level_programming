#include "lists.h"
#include <string.h>
/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the pointer to the head of the linked list.
 * @str: The string to be duplicated and added to the new node.
 *Return: The address of the new element (the new head), or NULL if it failed.
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = malloc(strlen(str) + 1);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);

}
