#include "main.h"
#include <stdio.h>
/**
 * main - That prints all argument it receives
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int r;

	for (r = 0; r < argc; r++)
	{
		printf("%s\n", argv[r]);
	}
	return (0);
}
