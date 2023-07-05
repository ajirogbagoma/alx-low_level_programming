#include "main.h"
/**
 * factorial - That returns the factorial of a number
 * @n: That returns the number of the factorial
 * Return: factorial n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
