#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - A pointer to a newly allocated space in memory which
 * contains a copy of the string given as a parameter
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *ddd;
	int r, m = 0;

	if (str == NULL)
		return (NULL);
	r = 0;
	while (str[r] != '\0')
		r++;
	ddd = malloc(sizeof(char) * (r + 1));

	if (ddd == NULL)
		return (NULL);

	for (m = 0; str[m]; m++)
		ddd[m] = str[m];
	return (ddd);
}
