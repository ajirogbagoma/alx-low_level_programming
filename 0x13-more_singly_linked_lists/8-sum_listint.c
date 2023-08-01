#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - That returns the sum of all the data of
 * a listint_t list
 * @head: A pointer to the first node
 * Return: The sum of all the data
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
