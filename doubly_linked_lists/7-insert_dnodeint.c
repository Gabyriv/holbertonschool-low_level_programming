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
	dlistint_t *newNode;
	dlistint_t *temp;
	unsigned int counter;

	if (h == NULL)
	{
		return (NULL);
	}
	temp = *h;
	counter = 0;
	if (idx == 0)
	{
		newNode = malloc(sizeof(dlistint_t));
		if (newNode == NULL)
		{
			return (NULL);
		}
		newNode->n = n;
		newNode->next = *h;
		newNode->prev = NULL;
		if (*h != NULL)
		{
			(*h)->prev = newNode;
		}
		*h = newNode;
		return (newNode);
	}
	while (temp != NULL)
	{
		if (counter == idx - 1)
		{
			newNode = malloc(sizeof(dlistint_t));
			if (newNode == NULL)
			{
				return (NULL);
			}
			newNode->n = n;
			newNode->next = temp->next;
			newNode->prev = temp;
			temp->next = newNode;
			if (newNode->next != NULL)
			{
				newNode->next->prev = newNode;
			}
			return (newNode);
		}
		temp = temp->next;
		counter++;
	}
	return (NULL);
}
