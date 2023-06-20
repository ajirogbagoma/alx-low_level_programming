#include "main.h"

#include <stdio.h>

/**
 * print_to_98 - To print all natural numbers from r to 98
 * @r: The number to start printing from
 * Return: Always 0
 */

void print_to_98(int r)

{
	if (r <= 98)
	{
	for (; r <= 98; r++)
	{
	if (r == 98)
	{
	printf("%d", r);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", r);
	}
	}
	}
	else
	{
	for (; r >= 98; r--)
	{
	if (r == 98)
	{
	printf("%d", r);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", r);
	}
	}
	}
}
