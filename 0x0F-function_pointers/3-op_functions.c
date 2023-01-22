#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: number to add
 * @b: number to add
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: number to subtract from
 * @b: number to subtract
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: number to multiply
 * @b: number to multiply
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of a by b
 * @a: number to divide
 * @b: number to divide by
 *
 * Return: division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of a divided by b
 * @a: number to modulo
 * @b: number to modulo by
 *
 * Return: remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
