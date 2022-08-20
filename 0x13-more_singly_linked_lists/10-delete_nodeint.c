#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to head node
 * @index: index of the node that should be deleted
 * Return: 1 if successful, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp, *prev = *head;

	if (prev == NULL || (prev->next == NULL && index != 0))
		return (-1);

	if (index != 0)
	{
		for (count = 0; (count < (index - 1)) && (prev != NULL); count++)
		{
			prev = prev->next;
		}
	}
	temp = prev->next;
	if (index != 0)
	{
		prev->next = temp->next;
		free(temp);
	}
	else
	{
		free(prev);
		*head = temp;
	}
	return (1);
}
