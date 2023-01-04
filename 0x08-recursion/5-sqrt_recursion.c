#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to square_root
 *
 * Return: square root of n, or -1 if no natural square root exists
 */
int _sqrt_recursion(int n)
{
	int initial, guess;

	if (n < 10000)
	{
		n *= 10000;
	}
	initial = n / 10000;
	guess = n % 10000;

	if (guess * guess > initial)
		return (-1);
	if (guess * guess == initial)
		return (guess);
	return (_sqrt_recursion(n + 1));
}
