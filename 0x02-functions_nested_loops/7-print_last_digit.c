#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to print last digit of
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	int last_digit = n % 10;

	return (last_digit);
}
