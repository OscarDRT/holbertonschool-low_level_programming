#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *aux = *h, *store_next;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		*h = new_node;
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	else
	{
		while (count < idx - 1)
		{
			if (aux->next == NULL)
				return (NULL);
			aux = aux->next;
			count++;
		}
		store_next = aux->next;
		aux->next = new_node;
		new_node->prev = aux;
		new_node->next = store_next;
		store_next->prev = new_node;
		new_node->n = n;
	}
	return (new_node);
}