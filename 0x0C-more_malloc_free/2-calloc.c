#include "main.h"
#include <stdlib.h>
/**
 * _calloc - That allocates memory for an array
 * @size: The size of bytes
 * @nmemb: The number of elements
 * Return: A pointer to the allocated memory if nmemb or size is
 * 0 it returns NULL if malloc fails it returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int m = 0, k = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	k = nmemb * size;
	p = malloc(k);

	if (p == NULL)
		return (NULL);

	while (m < k)
	{
		p[m] = 0;
		m++;
	}

	return (p);
}
