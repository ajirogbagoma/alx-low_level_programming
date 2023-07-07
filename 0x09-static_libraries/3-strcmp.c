#include "main.h"
/**
 * _strcmp - To compare string values
 * @s1: The inputed value
 * @s2: The inputed value
 * Return: s1[r] - s2[r]
 */

int _strcmp(char *s1, char *s2)
{
	int r;

	r = 0;
	while (s1[r] != '\0' && s2[r] != '\0')
	{
		if (s1[r] != s2[r])
		{
			return (s1[r] - s2[r]);
		}
		r++;
	}
	return (0);
}
