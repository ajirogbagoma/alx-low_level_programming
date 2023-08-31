#include "main.h"
/**
 * flip_bits - A function that returns the number of bits needed
 * to flip to get from one number to another
 * @n: First number
 * @m: Second number
 * Return: The number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int rbits;

	for (rbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			rbits++;
	}

	return (rbits);
}
