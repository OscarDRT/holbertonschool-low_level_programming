#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list
 * @head: head of the list
 * @index: index of the node, starting from 0
 * Return: node whit index
 */
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
