#include "lists.h"

/**
 * free_listint - function that free the list
 * @head: beginning of list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
