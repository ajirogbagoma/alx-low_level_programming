#include "main.h"
/**
 * clear_bit - A function that sets the value of
 * bit to 0 at a given index
 * @n: The pointer to an unsigned long int
 * @index: The bit index
 * Return: That returns 1 if success 0r -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int r;

	if (index > 63)
		return (-1);

	r = 1 << index;

	if (*n & r)
		*n ^= r;

	return (1);
}
