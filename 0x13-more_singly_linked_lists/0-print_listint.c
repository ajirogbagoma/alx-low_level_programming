#include <stdio.h>
#include "lists.h"
/**
 * print_listint - A function that prints all elements of a listint_t list
 * @h: The pointer to the head of the list_t list
 * Return: Number of nodes in the list_t list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
