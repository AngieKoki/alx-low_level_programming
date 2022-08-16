#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: first node
 * @n: constant parameter
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *p;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	p = *head;
	if (p == NULL)
		*head = new;
	else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = new;
	}
	return (new);
}
