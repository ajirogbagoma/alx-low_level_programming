#include "main.h"
/**
 * _strlen - That returns the length of a string
 * @s: The length of the string to get
 * Return: The length of string
 */

int _strlen(char *s)
{
int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
