#include "lists.h"
/**
 * free_listint - A function that frees a listint_t list
 * @head: That points to the head of the listint_t
 * to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
