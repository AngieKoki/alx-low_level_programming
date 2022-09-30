#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a linked list
 * @head: head node
 * @n: integer
 * Return: address of the new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
        dlistint_t *new, *headcopy;

	headcopy = *head

        if (head == NULL)
                return (NULL);

        new = malloc(sizeof(dlistint_t));
        if (new == NULL)
                return (NULL);

        new->n = n;

        if (*head == NULL)
        {
                new->next = NULL;
                new->prev = NULL;
                *head = new;
        }
        else
        {
                while (headcopy->next != NULL)
                        headcopy = headcopy->next;
		new->next = NULL;
		new->prev = headcopy;
		headcopy->next = new;
        }
        return (new);
}
