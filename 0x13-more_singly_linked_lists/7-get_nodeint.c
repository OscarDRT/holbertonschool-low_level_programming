#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth
 * node of a listint_t linked list
 * @head: beginning of list
 * @index: is the index of the node, starting at 0
 * Return: temp or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count = 0;

	while (temp != NULL)
	{
		if (head == NULL)
			return (NULL);
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}
	return (temp);
}
