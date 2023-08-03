#include "main.h"
/**
 * print_binary - A function that prints a number as binary string
 * @n: The number to be printed
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, printed = 0;

	while (bit)
	{
		if (n & 1
