#include "main.h"
/**
 * _puts - To print a string followed by a new line to stdout
 * @str: String character to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
