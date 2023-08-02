#include "lists.h"
/**
 * add_nodeint - A function that adds a new note at the beginning of a
 * listint_t list
 * @n: Where the new node integer contain
 * Return: The new address or NULL if the function fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *recent;

	recent = malloc(sizeof(listint_t));
	if (!head || !recent)
		return (NULL);

	recent->next = NULL;
	recent->n = n;
	if (*head)
		recent->next = *head;
	*head = recent;

	return (recent);
}
