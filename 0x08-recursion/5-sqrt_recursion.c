#include "main.h"

/**
 * _sqrt_helper - square root while tracking guess
 * @n: number to square_root
 * @g: guess
 *
 * Return: square root of n, or -1 if no natural square root
 */
int _sqrt_helper(int n, int g)
{
	if (g * g > n)
		return (-1);
	if (g * g == n)
		return (g);
	return (_sqrt_helper(n, g + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to square_root
 *
 * Return: square root of n, or -1 if no natural square root exists
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0));
}
