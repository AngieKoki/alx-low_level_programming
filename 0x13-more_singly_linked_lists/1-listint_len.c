#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: first node
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int x;

	x = 0;

	while (h != NULL)
	{
		h = h->next;
		h++;
	}
	return (h);
}
