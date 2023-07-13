#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - That concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes
 * Return: A pointer to the allocated memory if malloc fails
 * the status value is equal to 98
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *qout;
	unsigned int rs1, rs2, rqout, m;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (rs1 = 0; s1[rs1] != '\0'; rs1++)
		;

	for (rs2 = 0; s2[rs2] != '\0'; rs2++)
		;

	if (n > rs2)
		n = rs2;

	rqout = rs1 + n;

	qout = malloc(rqout + 1);

	if (qout == NULL)
		return (NULL);

	for (m = 0; m < rqout; m++)
		if (m < rs1)
			qout[m] = s1[m];
		else
			qout[m] = s2[m - rs1];

	qout[m] = '\0';

	return (qout);
}
