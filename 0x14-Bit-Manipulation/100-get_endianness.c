#include "main.h"
/**
 * get_endianness - A function that checks the endianness
 * Return: That returns 0 if big endian or 1 if little endian
 */

int get_endianness(void)
{
	unsigned int r;

	char *c;

	r = 1;
	c = (char *) &r;

	return ((int)*c);
}
