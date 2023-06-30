#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoder rot13
 * @s: The pointer to the string parameter
 * Return: *s
 */

char *rot13(char *s)
{
	int r;
	int m;
	char data1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefijklmnopqrstuvwxyz";
	char datarot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (r = 0; s[r] != '\0'; r++)
	{
		for (m = 0; m < 52; m++)
		{
			if (s[r] == data1[m])
			{
				s[r] = datarot[m];
				break;
			}
		}
	}
	return (s);
}
