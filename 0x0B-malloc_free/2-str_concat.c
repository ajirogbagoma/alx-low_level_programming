#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - That concatenates two strings
 * @s1: The string to concatenate
 * @s2: The string to concatenate
 * Return: A pointer to the new string created if
 * (Success) or NULL if (Error)
 */

char *str_concat(char *s1, char *s2)
{
char *s;
unsigned int r = 0, m = 0, n = 0, p = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[r])
		r++;

	while (s2[m])
		m++;

	p = r + m;
	s = malloc((sizeof(char) * p) + 1);

	if (s == NULL)
		return (NULL);

	m = 0;

	while (n < p)
	{
		if (n <= r)
			s[n] = s1[n];

		if (n >= r)
		{
			s[n] = s2[m];
			m++;
		}
		n++;
	}

	s[n] = '\0';
	return (s);
}
