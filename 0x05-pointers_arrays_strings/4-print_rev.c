#include "main.h"
/**
 * print_rev - A function that prints a string in reverse
 * @s: The string character to be printed
 * return: 0
 */
void print_rev(char *s)
{
	in longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
