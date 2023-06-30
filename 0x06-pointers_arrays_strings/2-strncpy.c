#include "main.h"
/**
 * _strncpy - To copy a string
 * @dest: The inputed value
 * @src: The inputed value
 * @n: The inputed value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
