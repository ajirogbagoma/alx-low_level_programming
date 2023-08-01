#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_nodeint_at_index - A function that inserts a new node
 * at a given position
 * @head: Double pointer
 * @idx: The index of the node
 * @n: The value of the new node
 * Return: The address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int r;
	listint_t *ptr, *recent;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		ptr = *head;
		for (r = 0; r < idx - 1 && ptr != NULL; r++)
		{
			ptr = ptr->next;
		}
		if (ptr == NULL)
			return (NULL);
	}
	recent = malloc(sizeof(listint_t));
	if (recent == NULL)
		return (NULL);
	recent->n = n;
	if (idx == 0)
	{
		recent->next = *head;
		*head = recent;
		return (recent);
	}
	recent->next = ptr->next;
	ptr->next = recent;
	return (recent);
}
