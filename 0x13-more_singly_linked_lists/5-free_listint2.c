#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: first node
 * Return: sets the head to Null
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	if ((*head)->next != NULL)
		temp = (*head)->next;
	else
	{
		free(*head);
		*head = NULL;
	}
	if (*head)
	{
		free_listint2(&temp);
		free(*head);
	}
	*head = NULL;
}
