#include "main.h"

/**
 * more_numbers - To print numbers from 0-14 ten times
 * Return: void
 */

void more_numbers(void)
{
int q, r;
	for (q = 1; q <= 10; q++)
	{
		for (r = 0; r <= 14; r++)
		{
			if (r >= 10)
			_putchar('1');
			_putchar(r % 10 + '0');
		}
			_putchar('\n');
	}
}
