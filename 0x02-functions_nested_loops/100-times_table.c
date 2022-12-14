#include "main.h"

/**
 * print_times_table - prints the times table, for any from 0 to 15
 * starting with 0
 * @n: size of times table
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int r, i = 0;

		while (i < (n + 1))
		{
			int j = 0;

			while (j < (n + 1))
			{
				if (!j)
				{
					_putchar('0');
				}
				else
				{
					r = i * j
					print_unit(r)
				}
				if (j < n)
					_putchar(',');
				else
					_putchar('\n');
				j++;
			}
			i++;
		}
	}
}
/**
 * print_unit - prints a single multiplication output in the table
 * excluding the first unit of each line, which is awlays 0
 * @r: the result from the multiplication
 */
void print_unit(int r)
{
	if (r > 99)
	{
		_putchar(' ');
		_putchar('0' + (r / 100));
		_putchar('0' + ((r % 100) / 10));
		_putchar('0' + (r % 10));
	}
	else if (r > 9)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + (r / 10));
		_putchar('0' + (r % 10));
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + r);
	}
}
