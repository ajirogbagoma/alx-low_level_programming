#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - That returns the natural
 * square root of a number
 * @n: To calculate the square root number
 * Return: The square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - That recures to find the
 * natural square root of a number
 * @n: To calculate the square root of the number
 * @i: The iterator
 * Return: The resulting square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
