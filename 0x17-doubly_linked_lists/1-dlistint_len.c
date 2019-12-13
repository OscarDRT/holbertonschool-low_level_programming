#include "lists.h"

/**
 * dlistint_len - count number of nodes
 * @h: head for parameter
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h->prev == NULL)
	{
		while (h)
		{
			h = h->next;
			count++;
		}
	}
	else if (h->next == NULL)
	{
		while (h)
		{
			h = h->prev;
			count++;
		}
	}
	return (count);
}
