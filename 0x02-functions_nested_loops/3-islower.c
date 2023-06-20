#include "main.h"
/**
 * _islower - Checks for the lowercase character
 * @d: The character to be checked
 * Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int d)

{
	if (d >= 97 && d <= 122)
	{
	return (1);
	}
	return (0);
}
