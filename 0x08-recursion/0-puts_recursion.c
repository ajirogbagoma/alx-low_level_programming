#include "main.h"
/**
 * _puts_recursion - That prints a string of function
 * @s: The character to be inputed
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
