#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list
 * @head: contains the header of the list
 * @index: number of node for delete
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *q;
	unsigned int count = 0;

	if (*head == NULL)
		return (NULL);
	q = *head;
	p = (*head)->next;
	if (index == 0)
	{
		*head = p;
		free(q);
	}
	else
	{
		while (count != index - 1)
		{
			p = p->next;
			q = q->next;
			count++;
		}
	}
	if (p == NULL)
		return (-1);
	if (p->next == NULL)
	{
		q->next = NULL;
		free(p);
	}
	else
	{
		q->next = p->next;
		free(p);
	}
	return (1);
}
