#include "main.h"
/**
 * binary_to_uint - A function that converts a binary number
 * into an unsigned int
 * @b: String that contains
 * the binary number
 * Return: Unsigned int form of the binary
 */

unsigned int binary_to_uint(const char *b)
{
	int r;
	unsigned int binary = 0;

	if (!b)
		return (0);
	for (r = 0; b[r]; r++)
	{
		if (b[r] < '0' || b[r] > '1')
			return (0);
		binary = 2 * binary + (b[r] - '0');
	}
	return (binary);
}
