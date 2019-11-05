#include "lists.h"

/**
 * sum_listint - function that returns
 * the sum of all the data (n) of a listint_t linked list
 * @head: contains the header of the list
 * Return: sum or NULL
 */
int sum_listint(listint_t *head)
{
	int save, sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		save = head->n;
		head = head->next;
		sum += save;
	}
	return (sum);
}
