#include "main.h"

/**
 * print_binary - prints the binary representaiton of a number
 * @n: number to represent
 */
void print_binary(unsigned long int n)
{
	unsigned long int sclr;

	for (sclr = 1; sclr <= n; sclr *= 2)
		continue;

	sclr /= 2;
	for (; sclr > 0; sclr /= 2)
	{
		if (sclr <= n)
		{
			_putchar('1');
			n -= sclr;
		}
		else
		{
			_putchar('0');
		}
	}
}
