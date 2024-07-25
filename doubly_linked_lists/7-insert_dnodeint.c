#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to the list.
 * @idx: The index of the list where the new node should be added.
 *			Index starts at 0.
 * @n: The integer for the new node.
 *
 * Return: The address of the new node,
 *			or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *newNode;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL);
		}
	}

	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->prev = temp;
	newNode->next = temp->next;
	temp->next->prev = newNode;
	temp->next = newNode;

	return (newNode);
}
