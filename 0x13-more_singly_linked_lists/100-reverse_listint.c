#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: lol
 * Return: Head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *act = NULL;
	listint_t *ant = NULL;

	while ((*head) != NULL)
	{
		act = (*head)->next;
		(*head)->next = ant;
		ant = (*head);
		(*head) = act;

	}
	(*head) = ant;
	return ((*head));
}
