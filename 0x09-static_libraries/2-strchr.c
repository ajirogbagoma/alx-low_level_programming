#include "main.h"

/**
 * _strchr - That locates a character in a string
 * @s: The string to be searched
 * @c: The character to be located
 * Return: A pointer to the first occurance if c is located
 * If c is not located - NULL
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
