#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - That prints name using pointer function
 * @name: The added string
 * @f: The function pointer
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
