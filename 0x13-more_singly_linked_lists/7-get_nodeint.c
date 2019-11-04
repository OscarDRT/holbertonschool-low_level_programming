#include "lists.h"

/**
 * get_nodeint_at_index - 
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count = 0;

	while(temp != NULL)
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