#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - That adds a new node at the start of the list
 * @head: The original linked list
 * @str: The node added string
 * Return: The address of the new list or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
