#include "main.h"
#include <stdlib.h>
/**
 * array_range - That creates an array of integers
 * @min: The minimum value
 * @max: The maximum value
 * Return: Apointer to the new array,if min > max return NULL
 * or if malloc fails then return NULL
 */

int *array_range(int min, int max)
{
	int *array;
	int r;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(*array) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);

	for (r = 0; min <= max; r++, min++)
		array[r] = min;

	return (array);
}
