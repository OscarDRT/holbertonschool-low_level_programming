#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int count = 0;

	while (aux)
	{
		if (head == NULL)
			return (NULL);
		if (count == index)
			return (aux);
		count++;
		aux = aux->next;
	}
	return (aux);
}