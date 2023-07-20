#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - That calculates the sum of all parameters
 * @n: The number of arguments
 * Return: Resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int r;
	int sum = 0;

	va_list list;

	va_start(list, n);

	for (r = 0; r < n; r++)
		sum += va_arg(list, int);
	va_end(list);

	return (sum);
}
