#include "main.h"

/**
 * times_table - prints the 9 times table
 * starting with 0
 */
void times_table(void)
{
	int r, n, n0, n1;
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			if (!j)
			{
				_putchar('0');
			}
			else
			{
				r = i * j;
				if (r > 9)
				{
					n0 = '0' + (r / 10);
					n1 = '0' + (r % 10);
					_putchar(' ');
					_putchar(n0);
					_putchar(n1);
				}
				else
				{
					n = '0' + r;
					_putchar(' ');
					_putchar(' ');
					_putchar(n);
				}
			}
			if (j < 9)
				_putchar(',');
			else
				_putchar('\n');
			j++;
		}
		i++;
	}
}
