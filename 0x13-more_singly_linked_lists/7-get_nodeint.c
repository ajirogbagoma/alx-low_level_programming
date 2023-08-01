#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - A function that returns the nth node of a
 * listint_t linked list
 * @head: Points to the first node
 * @index: Index of the node
 * Return: The pointer of the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int r;

	if (head == NULL)
		return (NULL);
	for (r = 0; r < index; r++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
