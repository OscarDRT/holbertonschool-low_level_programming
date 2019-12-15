#include "lists.h"

/**
 * getnodeindex - function that returns the nth node of a linked list
 * @head: head of the list
 * @index: index of the node, starting from 0
 * Return: node whit index
 */
dlistint_t *getnodeindex(dlistint_t *head, unsigned int index)
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
	dlistint_t *new_node, *aux = *h;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (h == NULL || new_node == NULL)
		return (NULL);
	while (aux)
	{
		count++;
		aux = aux->next;
	}
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		if (count == idx)
			new_node = add_dnodeint_end(h, n);
		else
		{
			aux = getnodeindex(*h, idx);
			if (aux == NULL)
				return (NULL);
			new_node->next = aux;
			new_node->prev = aux->prev;
			aux->prev = new_node;
			aux = new_node->prev;
			aux->next = new_node;
			new_node->n = n;
		}
	}
	return (new_node);
}
