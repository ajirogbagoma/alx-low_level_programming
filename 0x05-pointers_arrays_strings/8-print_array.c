#include "main.h"
/**
 * print_array - To print n elements of an array
 * @a: The array name
 * @n: The number of element of the array to be printed
 * return: a and n are the inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
