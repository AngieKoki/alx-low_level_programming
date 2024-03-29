#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head node
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next_node;

	if (!*head)
		return (0);

	while ((*head)->next != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = (*head);
		(*head) = next_node;
	}
	(*head)->next = prev_node;
	return (*head);
}
