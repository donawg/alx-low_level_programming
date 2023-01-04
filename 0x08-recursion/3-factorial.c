#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to factorial
 *
 * Return: Factorial of n
 */
int factorial(int n)
{
	if (!n)
		return (1);
	return (n * factorial(n - 1));
}
