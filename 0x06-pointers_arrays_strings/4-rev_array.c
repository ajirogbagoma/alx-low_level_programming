#include "main.h"
/**
 * reverse_array - To reverse array of integers
 * @a: The inputed character for array
 * @n: The number of elements of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int r;
	int p;

	for (r = 0; r < n--; r++)
	{
		p = a[r];
		a[r] = a[n];
		a[n] = p;
	}
}
