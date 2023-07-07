#include "main.h"
#include <stdio.h>
/**
 * main - That prints the name of a program with
 * a new line
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
