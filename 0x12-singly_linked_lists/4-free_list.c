#include "lists.h"
#include <stdlib.h>
/**
 * free_list - That frees a list
 * @head: The head of the linked list
 * Return: Always 0
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
