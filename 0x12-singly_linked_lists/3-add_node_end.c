#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - That adds a new node at the end of a list_t list
 * @head: The head of the linked list
 * @str: The string to store in the list
 * Return: The address of the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	size_t r;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (r = 0; str[r]; r++)
		;

	new_node->len = r;
	new_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)

		*head = new_node;
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}

	return (*head);
}
