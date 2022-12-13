#include "main.h"

/**
 * _abs - returns the absolute value of an int
 * @n: number to be returned in absolute value
 *
 * Return: Absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;

	return (n);
}
