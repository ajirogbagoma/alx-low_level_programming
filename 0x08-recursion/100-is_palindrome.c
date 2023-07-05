#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - That checks if a string is palindrome
 * @s: The string to reverse
 * Return: 1 if it is and 0 if it is not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - That returns the length of a string
 * @s: The length of the string to calculate
 * Return: The length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - That checks the characters recursively
 * for palindrome
 * @s: The string to be checked
 * @i: The iterator
 * @len: The length of the string
 * Return: 1 if palindrome and 0 if it is not
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
