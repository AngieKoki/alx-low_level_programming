#include "lists.h"

/**
 * list_len - return the number of elements in a linked list
 * @h: pointer to the linked list first node
 * Return: number of elements in linked list
 */

size_t list_len(const list_h *h)
{
	size_t p;

	p = 0;
	while (h != NULL)
	{
		h = h->next;
		p++;
	}
	return (p);
}
