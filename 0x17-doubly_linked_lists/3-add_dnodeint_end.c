#include "lists.h"

/**
 * add_dnodeint_end - function that adds a
 * new node at the end of a list
 * @head: beginning of list
 * @n: integer for the node
 * Return: new_node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux = *head;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	else
	{
		while (aux->next != NULL)
			aux = aux->next;
		new_node->n = n;
		aux->next = new_node;
		new_node->prev = aux;
		new_node->next = NULL;
	}
	return (new_node);
}
