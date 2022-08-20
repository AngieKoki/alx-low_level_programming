#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the head node of the list
 * Return: returns the head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n_copy;

	if (head == NULL || !(*head))
		return (0);

	temp = *head;
	n_copy = temp->n;
	*head = temp->next;
	free(temp);

	return (n_copy);
}
