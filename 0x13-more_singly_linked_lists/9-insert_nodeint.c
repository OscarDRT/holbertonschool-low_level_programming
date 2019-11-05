#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position
 * @head: contains the header of the list
 * @idx: index of the list where the new node should be added
 * @n:value for new_node->n
 * Return: new_node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *store_next, *new_node, *temp = *head;
	unsigned int val = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node->next = *head;
		new_node->n = n;
		*head = new_node;
	}
	else
	{
		while (val < idx - 1)
		{
			if (temp->next == NULL)
				return (NULL);
			temp = temp->next;
			val++;
		}
		store_next = temp->next;
		temp->next = new_node;
		new_node->next = store_next;
		new_node->n = n;
	}
	return (new_node);
}
