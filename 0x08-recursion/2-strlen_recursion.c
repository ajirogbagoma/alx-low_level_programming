#include "main.h"
/**
 * _strlen_recursion - That returns the length of a string
 * @s: The string to be measured
 * Return: The length of string
 */

int _strlen_recursion(char *s)
{
	int longi = 0;

	if (*s)
	{
		longi++;
		longi += _strlen_recursion(s + 1);
	}
	return (longi);
}
