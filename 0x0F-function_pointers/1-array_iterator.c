#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - That prints array elements on a new line
 * @size: The number of elements to be printed
 * @array: Array
 * @action: The pointer prints in regular or hex
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int r;

	if (array == NULL || action == NULL)
		return;
	for (r = 0; r < size; r++)
	{
		action(array[r]);
	}
}
