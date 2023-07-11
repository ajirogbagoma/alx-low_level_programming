#include "main.h"
#include <stdlib.>
/**
 * create_array - To create an array of char and initialize
 * with a specific char
 * @size: The size of the array
 * @c: The char to be initalized
 * Return: A pointer to the array or NULL if it fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int r;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (r = 0; r < size; r++)
		str[r] = c;
	return (str);
}
