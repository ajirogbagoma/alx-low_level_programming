#include "main.h"

/**
 * _strcat - To concatenate two stringd
 * @dest: The inputed value
 * @src: The inputed value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int r;
	int m;

	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		dest[r] = src[m];
		r++;
		m++;
	}

	dest[r] = '\0';
	return (dest);
}
