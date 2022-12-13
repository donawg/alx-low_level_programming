#include "main.h"

/**
 * print_sign - prints the sign of the number, or 0 if 0
 * @n: number to check
 *
 * Return: 1 if n > 0, 0 if n is 0, -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
