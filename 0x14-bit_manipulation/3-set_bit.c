#include "main.h"
/**
 * set_bit - A function that sets the value a bit 1 at
 * a given index
 * @n: That points to the unsigned long int
 * @index: Th bit index
 * Return: That returns 1 if success or -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int r;

	if (index > 63)
		return (-1);

	r = 1 << index;
	*n = (*n | r);

	return (1);
}
