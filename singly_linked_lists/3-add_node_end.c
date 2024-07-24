#include "lists.h"

/**
 * add_node_end - Adds a new node at the end
 *				of a list_t list.
 * @head: The start of the list.
 * @str: The string to be duplicated.
 *
 * Return: The addres of the new element
 *			or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *string_duplicate;
	int length;
	list_t *new_node;
	list_t *last;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	string_duplicate = strdup(str);
	if (string_duplicate == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	new_node->str = string_duplicate;
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
			last->next = new_node;
		}
	}
	return (*head);
}
