#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the amount of elements in a linked list.
 * @h: A pointer to the list_t list.
 *
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
