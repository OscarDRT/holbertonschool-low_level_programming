#include "lists.h"

/**
 * print_dlistint - print integer
 * @h: head for parameter
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h->prev == NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}
	else if (h->next == NULL)
	{
		while(h)
		{
			printf("%d\n", h->n);
			h = h->prev;
			count++;
		}
	}
	return (count);
}
