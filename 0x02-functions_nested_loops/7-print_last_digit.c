#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to print last digit of
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n *= -1;
	last_digit = n % 10;
	_putchar('0' + last_digit);

	return (last_digit);
}
