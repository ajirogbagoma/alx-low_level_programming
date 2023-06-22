#include "main.h"

/**
 * print_numbers - To print numbers from 0 to 9
 * Return: Always 0
 */

void print_numbers(void)
{
	char p;

	for (p = '0'; p <= '9'; p++)
	{
	_putchar(p);
	}
	_putchar ('\n');
}
