#include "main.h"
#include <stdlib.h>
/**
 * _realloc - That reallocates a memory block
 * @ptr: A pointer to the previously allocated memory
 * @old_size: The allocated space of ptr size in bytes
 * @new_size: The size of the new memory block in bytes
 * Return: ptr if new_size equals old_size or return ptr
 * without changes if malloc fails it returns NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
