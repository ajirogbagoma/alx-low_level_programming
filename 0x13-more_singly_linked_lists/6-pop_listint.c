#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - That deletes head node
 * @head: Double pointer
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *beginning;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	beginning = *head;
	*head = beginning->next;
	n = beginning->n;
	free(beginning);
	return (n);
}
