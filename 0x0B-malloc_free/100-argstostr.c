#include <stdlib.h>
#include "main.h"
/**
 * argstostr - That concatenates all arguments of a program
 * @ac: The number of arguments
 * @av: The array of arguments
 * Return: A pointer to the new string (Success) NULL (Error)
 */

char *argstostr(int ac, char **av)
{
	int r, m, n, l;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (r = 0; r < ac; r++)
	{
		for (m = 0; av[r][m] != '\0'; m++)
			l++;
		l++;
	}

	str = malloc(sizeof(char) * (l + 1));

	if (str == NULL)
		return (NULL);

	n = 0;

	for (r = 0; r < ac; r++)
	{
		for (m = 0; av[r][m] != '\0'; m++)
		{
			str[n] = av[r][m];
			n++;
		}
		str[n] = '\n';
		n++;
	}

	return (str);
}
