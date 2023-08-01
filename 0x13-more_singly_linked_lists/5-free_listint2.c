#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - That frees a listint_t list
 * @head: That points tothe address of the head listint_t
 * list
 * Description: The head is NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}

	head = NULL;
}
