#include "lists.h"

/**
 * free_dlistint - function that free a list
 * @head: head of the list
 * Return: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	free(head);
}
