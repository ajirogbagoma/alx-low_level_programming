#include "main.h"

/**
 * _isdigit - To check for a digit
 * @r: The character to be checked
 * Return: 1 for the digit character or 0 for anything else
 */

int _isdigit(int r)
{
if (r >= 48 && r <= 57)
{
return (1);
}
return (0);
}
