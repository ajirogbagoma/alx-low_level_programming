#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - A function that deletes the node at index
 * @head: Double pointer
 * @index: The node index
 * Return: The pointer to the index node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int r;
	listint_t *ptr, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	ptr = *head;
	for (r = 0; r < index - 1; r++)
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
	}
	next = ptr->next;
	ptr->next = next->next;
	free(next);
	return (1);
}
