#include "main.h"
/**
 * swap_int - To swap the value of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
