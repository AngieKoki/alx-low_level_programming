#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: first node
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *p, *p2;

	p = head;
	while (p != NULL)
	{
		p2 = p->next;
		free(p);
		p = p2;
	}
}
