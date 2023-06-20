#include "main.h"
/**
 * times_table - To print 9 times number starting with 0
 * Return: empty output
 */

void times_table(void)
{
	int s, t, u, v, w;

	for (s = 0; s <= 9; s++)
	{
	for (t = 0; t <= 9; t++)
	{
	u = s * t;
	if (u > 9)
	{
	v = u % 10;
	w = (u - v) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(w + '0');
	_putchar(v + '0');
	}
	else
	{
	if (t != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(u + '0');
	}
	}
	_putchar('\n');
	}
}
