#include "main.h"

/**
 * _isalpha - To check for alphabetic character
 * @d: The character to be checked
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int d)
{
if ((d >= 65 && d <= 97) || (d >= 97 && d <= 122))
{
return (1);
}
return (0);
}
