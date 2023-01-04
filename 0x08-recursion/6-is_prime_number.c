#include "main.h"

/**
 * prime_helper - figures out if a number is prime, while tracking factors
 * @n: number to test
 * @i: tracker of tested factors
 *
 * Return: 1 if prime number, 0 otherwise
 */
int prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i > (n / 2))
		return (1);
	if (!(n % i))
		return (0);
	return (prime_helper(n, i + 1));
}

/**
 * is_prime_number - figures out if a number is prime
 * @n: number to test
 *
 * Return: 1 if prime number, 0 other wise
 */
int is_prime_number(int n)
{
	return (prime_helper(n, 2));
}
