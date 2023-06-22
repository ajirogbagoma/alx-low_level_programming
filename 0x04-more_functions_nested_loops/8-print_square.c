#include "main.h"

/**
 * print_square - To print a square of size size
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int r, q;

	if (size <= 0)
		_putchar('\n');
	for (r = 0; r < size; r++)
	{
		for (q = 0; q < (size); q++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
