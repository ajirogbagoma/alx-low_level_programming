#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - A pointer to a 2 dimensional array of integers
 * @width: The width of the matrix
 * @height: The height of the matrix
 * Return: A pointer to the matrix if (Success)
 * or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int r, m;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	for (r = 0; r < height; r++)
	{
		array[r] = (int *) malloc(sizeof(int) * width);
		if (array[r] == NULL)
		{
			free(array);
			for (m = 0; m <= r; m++)
				free(array[m]);
			return (NULL);
		}
	}

	for (r = 0; r < height; r++)
	{
		for (m = 0; m < width; m++)
		{
			array[r][m] = 0;
		}
	}
	return (array);
}
