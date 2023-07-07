#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - That adds positive numbers
 * @argc: The number of command line arguments
 * @argv: The array that contains the program command
 * line arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int r, m, add = 0;

	for (r = 1; r < argc; r++)
	{
		for (m = 0; argv[r][m] != '\0'; m++)
		{
			if (!isdigit(argv[r][m]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[r]);
	}
	printf("%d\n", add);
	return (0);
}
