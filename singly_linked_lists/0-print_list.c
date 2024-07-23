#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: a pointer to a string
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	int nodes;

	while (h)
	{
		if (h == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%d] %s\n", nodes, h->str);
			h = h->next;
			nodes++;
		}
	}

	return (nodes);
}
