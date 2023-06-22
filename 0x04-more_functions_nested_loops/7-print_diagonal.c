#include "main.h"

/**
 * print_diagonal - To print lines diagonal
 * @n: variable input
 * Return: void
 */

void print_diagonal(int n)
{
	int r, q;

	if (n <= 0)
		_putchar('\n');
	for (r = 0; r < n; r++)
	{
		for (q = 0; q < r; q++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
