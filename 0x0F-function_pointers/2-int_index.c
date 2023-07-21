#include "function_pointers.h"
/**
 * int_index - That returns index if comparison is true
 * else -1
 * @size: The size of elements in the array
 * @array: Array
 * @cmp: A pointer to the function of 1 of the 3 in main
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int r;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (r = 0; r < size; r++)
	{
		if (cmp(array[r]))
			return (r);
	}
	return (-1);
}
