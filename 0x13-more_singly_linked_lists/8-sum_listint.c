#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) in list
 * @head: pointer to head node
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
