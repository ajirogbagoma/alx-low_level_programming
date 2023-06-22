#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description: To print numbers 1 - 100 w/
 * Fizz for multiple of 3, Buzz for multiple of 5,
 * and FizzBuzz for multiple of both
 * Return: Always 0
 */
int main(void)
{
	int r;

	for (r = 1; r <= 100; r++)
	{
		if (r % 3 == 0 && r % 5 != 0)
			printf("Fizz ");
		else if (r % 5 == 0 && r % 3 != 0)
			printf("Buzz ");
		else if (r % 5 == 0 && r % 3 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", r);
	}
	printf("\n");
	return (0);
}
