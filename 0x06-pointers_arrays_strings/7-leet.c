#include "main.h"
/**
 * leet - To encode into 1337speak
 * @n: The inputed value
 * Return: n value
 */

char *leet(char *n)
{
	int r, m;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (r = 0; n[r] != '\0'; r++)
	{
		for (m = 0; m < 10; m++)
		{
			if (n[r] == s1[m])
			{
				n[r] = s2[m];
			}
		}
	}
	return (n);
}
