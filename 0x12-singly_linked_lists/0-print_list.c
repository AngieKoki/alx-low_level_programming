#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the contents of the list
 * Return: number of nodes, if str = null, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t p;

	p = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		p++;
	}
	return (p);
}
