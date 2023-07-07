#include "main.h"
/**
 * _strncat - To concatenate two strings using n bytes from src
 * @dest: The inputed value
 * @src: The inputed value
 * @n: The inputed value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int r;
	int m;

	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	m = 0;
	while (m < n && src[m] != '\0')
	{
	dest[r] = src[m];
	r++;
	m++;
	}
	dest[r] = '\0';
	return (dest);
}
