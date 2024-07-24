#include "lists.h"

/**
 * add_node - Adds a new node at the beginning
 *				of a list_t list.
 * @str: String to be duplicated.
 * @head: The start of the list.
 *
 * Return: The addres of the new element
 *			or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	int string_length;
	char *string_duplicate;
	list_t *new_node;

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

	for (string_length = 0; str[string_length]; string_length++)

	new_node->str = string_duplicate;
	new_node->len = string_length;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
