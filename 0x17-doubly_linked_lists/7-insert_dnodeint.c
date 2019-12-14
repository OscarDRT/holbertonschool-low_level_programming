#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position
 * @h: head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer in node
 * Return: New nodo
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *aux = *h, *store_next;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
		add_dnodeint(h, n);
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
