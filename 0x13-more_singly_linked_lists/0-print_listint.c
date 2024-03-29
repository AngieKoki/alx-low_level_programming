#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: head node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int x;

	x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}

	return (x);
}
