#include "lists.h"

/**
 * pop_listint - function that deletes
 * the head node of a listint_t linked
 * list, and returns the head node’s data (n)
 * @head: beginning of list
 * Return: val
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *save = *head;
	int val;

	if (*head == NULL)
		return (0);
	temp = (*head)->next;
	val = (*head)->n;
	*head = temp;
	free(save);
	return (val);
}
