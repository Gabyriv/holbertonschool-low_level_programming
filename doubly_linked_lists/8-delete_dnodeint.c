#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at the index
 *                              of a dlistint_t linked list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 * @head: A pointer to the list.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temporary = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (temporary == NULL)
			return (-1);
		temporary = temporary->next;
	}

	if (temporary == *head)
	{
		*head = temporary->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		temporary->prev->next = temporary->next;
		if (temporary->next != NULL)
			temporary->next->prev = temporary->prev;
	}

	free(temporary);
	return (1);
}
