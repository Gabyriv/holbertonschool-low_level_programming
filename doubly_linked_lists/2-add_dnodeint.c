#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: The start of the list
 * @n: Node to be added.
 *
 * Return: The address of the new element
 *			or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
