#include "main.h"
#include <stdio.h>
/**
 * _atoi - That converts a string to an integer
 * @s: The string to be converted
 * Return: The integer converted from the string
 */

int _atoi(char *s)
{
	int m, n, o, len, p, digit;

	m = 0;
	n = 0;
	o = 0;
	len = 0;
	p = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (m < len && p == 0)
	{
		if (s[m] == '-')
			++n;

		if (s[m] >= '0' && s[m] <= '9')
		{
			digit = s[m] - '0';
			if (n % 2)
				digit = -digit;
			o = o * 10 + digit;
			p = 1;
			if (s[m + 1] < '0' || s[m + 1] > '9'
)
				break;
			p = 0;
		}
		m++;
	}
	if (p == 0)

		return (0);
	return (o);
}

/**
 * main - That multiplies two numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0 (Success) 1 (Error)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
