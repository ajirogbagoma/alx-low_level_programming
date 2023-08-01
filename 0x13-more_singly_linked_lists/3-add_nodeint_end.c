#include "lists.h"
/**
 * add_nodeint_end - That add a need node at the end of
 * a listint_t list
 * @head: A pointer to the address of the head of the
 * listint_t list
 * @n: The integer for the new node
 * Return: The address of the new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *recent, *last;

	recent = malloc(sizeof(listint_t));
	if (recent == NULL)
		return (NULL);

	recent->n = n;
	recent->next = NULL;

	if (*head == NULL)
		*head = recent;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = recent;
	}

	return (*head);
}

