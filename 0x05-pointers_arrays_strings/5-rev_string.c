#include "main.h"

/**
 * rev_string - That reverses a string
 * @s: Input string character
 * return: string in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int g;

	while (s[counter] != '\0')
	counter++;
	for (g = 0; g < counter; g++)
	{
		counter--;
		rev = s[g];
		s[g] = s[counter];
		s[counter] = rev;
	}
}
