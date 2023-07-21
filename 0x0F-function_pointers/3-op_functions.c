#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - That returns the sum of two numbers
 * @a: The first number
 * @b: The second number
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - That returns the differnce of two numbers
 * @a: The first number
 * @b: The second number
 * Return: The difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - That returns the product ofn two numbers
 * @a: The first number
 * @b: The second number
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - That returns the division of two numbers
 * @a: The first number
 * @b: The second number
 * Return: The quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - That returns the remainder of two numbers
 * @a: The first number
 * @b: The second number
 * Return: The remainder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
