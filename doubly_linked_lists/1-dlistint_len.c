#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: A pointer to the list.
 *
 * Return: The number of elements in a linked dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
