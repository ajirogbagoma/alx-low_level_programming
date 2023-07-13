#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - That allocates memory using malloc
 * @b: The number of bytes to be allocated
 * Return: A pointer to the allocated memory, if malloc fails the
 * status value should be equal to 98
 */

void *malloc_checked(unsigned int b)
{
	char *r;

	r = malloc(b);
	if (r == NULL)
		exit(98);
	return (r);
}
