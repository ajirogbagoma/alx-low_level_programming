#include "main.h"

/**
 * _memcpy - That copy @n bytes from memory area @src
 * to memory area @dest
 * @n: The function copies
 * @src: The bytes from memory area
 * @dest: The memory area
 * Return: The pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r = 0;

	while (r < n)
	{
		dest[r] = src[r];
		r++;
	}

	return (dest);
}
