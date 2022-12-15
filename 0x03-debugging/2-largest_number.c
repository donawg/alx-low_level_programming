#include "main.h"

/**
 * largest_number - returns the largeest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third interger
 * Return: largest integer
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
