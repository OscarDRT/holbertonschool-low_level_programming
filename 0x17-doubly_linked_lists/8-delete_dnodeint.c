#include "lists.h"

/**
* delete_dnodeint_at_index - delete node index n
* @head: head of the list
* @index: index node for delete
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *tail;
	unsigned int count = 1;

	if (*head == NULL)
		return (-1);
	if (index == 0 && tmp->next == NULL)
	{
		free(tmp);
		*head = NULL;
		return (-1);
	}
	if (index == 0)
	{
		(*head) = (*head)->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (count != index)
	{
		tmp = tmp->next;
		count++;
	}
	if (tmp == NULL || tmp->next == NULL)
		return (-1);
	if (tmp->next->next == NULL)
	{
		tail = tmp->next;
		free(tail);
		tail = NULL;
		tmp->next = NULL;
	}
	else
	{
		tail = tmp->next->next;
		free(tmp->next);
		tmp->next = tail;
		tail->prev = tmp;
	}
	return (1);
}
