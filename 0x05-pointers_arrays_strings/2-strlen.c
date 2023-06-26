#include "main.h"
/**
 * _strlen - A function that returns the length of a string
 * @s: The character to be inputed
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
